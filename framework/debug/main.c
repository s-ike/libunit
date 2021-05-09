#include "../libunit.h"

int test_framework(void)
{
	return (SUCCESS);
}

int	main(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("Framework:");
	load_test(&testlist, "Framework test", &test_framework);
	return(launch_tests(&testlist));
}
