#include "strdup_tests.h"

int	address_test(void)
{
	const char	*s1 = "Hello, 42!";
	char		*s2;
	int			ret;

	s2 = ft_strdup(s1);
	ret = s1 == s2;
	free(s2);
	if (ret)
		return (-1);
	else
		return (0);
}
