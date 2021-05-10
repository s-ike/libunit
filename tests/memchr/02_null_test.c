#include <string.h>
#include "memchr_tests.h"

int	memchr_null_test(void)
{
	if (ft_strlen(NULL))
		return (-1);
	else
		return (0);
}
