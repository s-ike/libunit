#include <string.h>
#include "memchr_tests.h"

int	memchr_empty_str_test(void)
{
	if (ft_strlen("") == strlen(""))
		return (0);
	else
		return (-1);
}
