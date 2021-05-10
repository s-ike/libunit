
#include "strlen_tests.h"

int	strlen_empty_str_test(void)
{
	if (ft_strlen("") == strlen(""))
		return (0);
	else
		return (-1);
}
