#include "atoi_tests.h"

/* INT_MAX = 2147483647 */
int	atoi_intmax_test(void)
{
	if (ft_atoi("2147483647") == atoi("2147483647"))
		return (0);
	else
		return (-1);
}
