#include "strdup_tests.h"
#include "libunit.h"

int	strdup_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("STRDUP:");
	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "NULL test", &null_test);
	load_test(&testlist, "Bigger string test", &bigger_str_test);
	load_test(&testlist, "Empty string test", &empty_str_test);
	load_test(&testlist, "Address test", &address_test);
	return(launch_tests(&testlist));
}
