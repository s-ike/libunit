#include <stdlib.h>
#include "atoi_tests.h"

int	atoi_basic_test(void)
{

	if (ft_atoi("42") == atoi("42"))
		return (0);
	else
		return (-1);
}
