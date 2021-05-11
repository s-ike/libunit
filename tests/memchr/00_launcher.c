#include "memchr_tests.h"
#include "libunit.h"

int	memchr_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("MEMCHR:");
	load_test(&testlist, "Basic test", &memchr_basic_test);
	load_test(&testlist, "NULL test", &memchr_null_test);
	load_test(&testlist, "Bigger string test", &memchr_bigger_str_test);
	load_test(&testlist, "Empty string test", &memchr_empty_str_test);
	return (launch_tests(&testlist));
}
