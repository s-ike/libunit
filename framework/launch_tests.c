#include "libunit.h"

static void
	put_num_of_successes(const int successes, const int test_cnt)
{
	if (successes == test_cnt)
		printf("%s", CRL_GREEN);
	else
		printf("%s", CRL_RED);
	printf("%d/%d tests checked%s\n", successes, test_cnt, CRL_DEFAULT);
}

static int
	put_result(const char *testname, int result)
{
	int8_t	signed_result;

	signed_result = result;
	printf("%5s%s%s", "> ", testname, " : ");
	if (signed_result == SUCCESS)
	{
		printf("%s%s", CRL_GREEN, PUT_OK ,CRL_DEFAULT);
		return (SUCCESS);
	}
	else if (signed_result == FAILURE)
		printf("%s%s", CRL_RED, PUT_KO);
	else if (result == SIGSEGV)
		printf("%s%s", CRL_RED, PUT_SEGV);
	else if (result == SIGBUS)
		printf("%s%s", CRL_RED, PUT_BUSE);
	else if (result == FORK_FAIL)
		printf("%s%s", CRL_WHITE, "Fork failed");
	else
		printf("%s%s", CRL_WHITE, PUT_UNKNOWN);
	printf("%s\n", CRL_DEFAULT);
	return (FAILURE);
}

static int
	exec_test(t_unit_test *testlist)
{
	pid_t	pid;
	int		status;
	int		exit_code;

	exit_code = FORK_FAIL;
	pid = fork();
	if (pid < 0)
		return (exit_code);	// TODO: fork fail
	else if (pid == 0)
		exit(testlist->test());
	else
		wait(&status);
	if (WIFEXITED(status))
		exit_code = WEXITSTATUS(status); //子プロセスの終了コード
	else if (WIFSIGNALED(status))
		return (WTERMSIG(status));
	return (exit_code);
}

static int
	launch_tests_imple(t_unit_test **testlist)
{
	t_unit_test	*current;
	int			ret;
	int			test_cnt;
	int			successes;

	current = *testlist;
	ret = 0;
	test_cnt = 0;
	successes = 0;
	while (current)
	{
		ret = put_result(current->testname, exec_test(current));
		current = current->next;
		test_cnt++;
		if (ret == SUCCESS)
			successes++;
	}
	put_num_of_successes(successes, test_cnt);
	return (ret);
}

int
	launch_tests(t_unit_test **testlist)
{
	int	ret;

	ret = SUCCESS;
	if (!testlist)
		return (FAILURE);
	ret = launch_tests_imple(testlist);
	clear_test(testlist);
	return (ret);
}
