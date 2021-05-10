#include <string.h>
#include "memchr_tests.h"

int	memchr_basic_test(void)
{
	if (ft_memchr("Hello", 'l', 5) == memchr("Hello"))
		return (0);
	else
		return (-1);
}
