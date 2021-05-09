#include <string.h>
#include "strlen_tests.h"

int	bus_error_test(void)
{
	char	*s = "Hello";

	s[0] = 'h';
	if (ft_strlen(s))
		return (0);
	else
		return (-1);
}
