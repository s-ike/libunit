#include "../libunit.h"

#ifdef DEBUG
static void
	exec_leaks(void)
{
	system("leaks debug.out");
}
#else

static void
	exec_leaks(void)
{
}
#endif

int test_ok(void)
{
	return (SUCCESS);
}

int test_ko(void)
{
	return (FAILURE);
}

int	main(void)
{
	t_unit_test	*testlist;
	int			ret;

	testlist = NULL;
	puts("Framework:");
	load_test(&testlist, "Framework-ok-test", &test_ok);
	load_test(&testlist, "Framework-ko-test", &test_ko);
	ret = launch_tests(&testlist);
	exec_leaks();
	return(ret);
}
