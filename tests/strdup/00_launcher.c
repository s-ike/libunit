#include "strdup_tests.h"
#include "libunit.h"

int	strdup_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("STRDUP:");
	load_test(&testlist, "Basic test", &strdup_basic_test);
	load_test(&testlist, "NULL test", &strdup_null_test);
	load_test(&testlist, "Bigger string test", &strdup_bigger_str_test);
	load_test(&testlist, "Empty string test", &strdup_empty_str_test);
	load_test(&testlist, "Address test", &strdup_address_test);
	return (launch_tests(&testlist));
}
