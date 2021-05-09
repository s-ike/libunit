#include "strlen_tests.h"
#include "libunit.h"

int	strlen_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("STRLEN:");
	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "NULL test", &null_test);
	load_test(&testlist, "Bigger string test", &bigger_str_test);
	load_test(&testlist, "Bus error test", &bus_error_test);
	return(launch_tests(&testlist));
}
