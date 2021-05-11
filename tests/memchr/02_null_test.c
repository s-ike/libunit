#include "memchr_tests.h"

int	memchr_null_test(void)
{
	if (ft_memchr(NULL, 0, 1))
		return (-1);
	else
		return (0);
}
