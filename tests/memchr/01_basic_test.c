#include "memchr_tests.h"

int	memchr_basic_test(void)
{
	if (ft_memchr("Hello", 'l', 5) == memchr("Hello", 'l', 5))
		return (0);
	else
		return (-1);
}
