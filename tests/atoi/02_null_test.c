#include <stdlib.h>
#include "atoi_tests.h"

int	atoi_null_test(void)
{
	if (ft_atoi(NULL))
		return (-1);
	else
		return (0);
}
