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

int test_framework(void)
{
	return (SUCCESS);
}

int	main(void)
{
	t_unit_test	*testlist;
	int			ret;

	testlist = NULL;
	puts("Framework:");
	load_test(&testlist, "Framework test", &test_framework);
	ret = launch_tests(&testlist);
	exec_leaks();
	return(ret);
}
