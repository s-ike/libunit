#include <stdlib.h>
#include <limits.h>
#include "atoi_tests.h"

int	atoi_intmax_test(void)
{

	if (ft_atoi("2147483647") == atoi("2147483647")) // INT_MAX
		return (0);
	else
		return (-1);
}
