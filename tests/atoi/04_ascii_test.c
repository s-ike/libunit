#include <stdlib.h>
#include <limits.h>
#include "atoi_tests.h"

int	atoi_ascii_test(void)
{
	if (ft_atoi("  \t-42ft") == atoi("  \t-42ft"))
		return (0);
	else
		return (-1);
}
