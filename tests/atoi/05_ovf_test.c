#include <stdlib.h>
#include <limits.h>
#include "atoi_tests.h"

int	ovf_test(void)
{

	if (ft_atoi("4294967295") == atoi("4294967295")) // ULONG_MAX
		return (0);
	else
		return (-1);
}
