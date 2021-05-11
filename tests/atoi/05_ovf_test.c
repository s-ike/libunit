#include "atoi_tests.h"

/* ULONG_MAX = 4294967295 */
int	atoi_ovf_test(void)
{
	if (ft_atoi("4294967295") == atoi("4294967295"))
		return (0);
	else
		return (-1);
}
