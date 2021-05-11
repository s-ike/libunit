#include "libunit.h"

static void
	put_num_of_successes(const int successes, const int test_cnt)
{
	if (!test_cnt)
		printf("%s", CRL_YELLOW);
	else if (successes == test_cnt)
		printf("%s", CRL_GREEN);
	else
		printf("%s", CRL_RED);
	double_puts_num(g_fp, successes, test_cnt, "tests checked");
	double_puts_string(g_fp, NULL, "\n", "");
	printf("%s", CRL_DEFAULT);
}

static int
	put_result(const char *testname, int result)
{
	double_puts_string(g_fp, NULL, "   > ", testname);
	double_puts_string(g_fp, NULL, " : ", "");
	if (result == SUCCESS)
	{
		double_puts_string(g_fp, CRL_GREEN, PUT_OK, "");
		double_puts_string(g_fp, NULL, "\n", "");
		return (SUCCESS);
	}
	else if (result == FAILURE)
		double_puts_string(g_fp, CRL_RED, PUT_KO, "");
	else if (result == SIGSEGV)
		double_puts_string(g_fp, CRL_RED, PUT_SEGV, "");
	else if (result == SIGBUS)
		double_puts_string(g_fp, CRL_RED, PUT_BUSE, "");
	else if (result == SIGABRT)
		double_puts_string(g_fp, CRL_RED, PUT_ABRT, "");
	else if (result == SIGALRM)
		double_puts_string(g_fp, CRL_RED, PUT_TIMEOUT, "");
	else if (result == FORK_FAIL)
		double_puts_string(g_fp, CRL_RED, PUT_FORKFAIL, "");
	else
		double_puts_string(g_fp, CRL_RED, PUT_UNKNOWN, "");
	double_puts_string(g_fp, NULL, "\n", "");
	return (FAILURE);
}

static int
	exec_test(t_unit_test *testlist)
{
	pid_t	pid;
	int		status;

	pid = fork();
	if (pid < 0)
		return (FORK_FAIL);
	else if (pid == 0)
	{
		alarm(TIME_LIMIT);
		exit(testlist->test());
	}
	else
		wait(&status);
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 255)
			return (FAILURE);
		return (WEXITSTATUS(status));
	}
	else if (WIFSIGNALED(status))
		return (WTERMSIG(status));
	return (UNKNOWN);
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
	if (successes == test_cnt)
		return (SUCCESS);
	return (FAILURE);
}

int
	launch_tests(t_unit_test **testlist, const char *title)
{
	int			ret;

	ret = SUCCESS;
	if (!testlist)
		return (FAILURE);
	double_puts_string(g_fp, NULL, title, "\n");
	ret = launch_tests_imple(testlist);
	clear_test(testlist);
	return (ret);
}
