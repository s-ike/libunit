#include "memchr_tests.h"

int	memchr_empty_str_test(void)
{
	if (ft_memchr("", '\0', 1) == memchr("", '\0', 1))
		return (0);
	else
		return (-1);
}
