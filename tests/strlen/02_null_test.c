#include <string.h>
#include "strlen_tests.h"

int	null_test(void)
{
	if (ft_strlen(NULL))
		return (-1);
	else
		return (0);
}
