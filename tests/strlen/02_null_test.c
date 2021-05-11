#include "strlen_tests.h"

int	strlen_null_test(void)
{
	if (ft_strlen(NULL))
		return (-1);
	else
		return (0);
}
