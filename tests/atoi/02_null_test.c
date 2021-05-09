#include <stdlib.h>
#include "atoi_tests.h"

int	null_test(void)
{
	if (ft_atoi(NULL))
		return (-1);
	else
		return (0);
}
