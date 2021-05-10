#include "libunit.h"
#include "atoi_tests.h"

int	atoi_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("ATOI:");
	load_test(&testlist, "Basic test", &atoi_basic_test);
	load_test(&testlist, "NULL test", &atoi_null_test);
	load_test(&testlist, "INT_MAX test", &atoi_intmax_test);
	load_test(&testlist, "ASCII test", &atoi_ascii_test);
	load_test(&testlist, "OVF test", &atoi_ovf_test);
	return(launch_tests(&testlist));
}
