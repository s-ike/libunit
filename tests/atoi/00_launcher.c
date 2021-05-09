#include "libunit.h"
#include "atoi_tests.h"

int	atoi_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("ATOI:");
	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "NULL test", &null_test);
	load_test(&testlist, "INT_MAX test", &intmax_test);
	load_test(&testlist, "ASCII test", &ascii_test);
	load_test(&testlist, "OVF test", &ovf_test);
	return(launch_tests(&testlist));
}
