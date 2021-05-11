#include "strlen_tests.h"
#include "libunit.h"

int	strlen_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("STRLEN:");
	load_test(&testlist, "Basic test", &strlen_basic_test);
	load_test(&testlist, "NULL test", &strlen_null_test);
	load_test(&testlist, "Bigger string test", &strlen_bigger_str_test);
	load_test(&testlist, "Empty string test", &strlen_empty_str_test);
	return (launch_tests(&testlist));
}
