#include <string.h>
#include "strlen_tests.h"

int	basic_test(void)
{
	if (ft_strlen("Hello") == strlen("Hello"))
		return (0);
	else
		return (-1);
}
