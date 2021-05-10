#include "strdup_tests.h"

int	empty_str_test(void)
{
	const char	*s1 = "";
	char		*s2;
	int			ret;

	s2 = ft_strdup(s1);
	ret = strcmp(s1, s2);
	free(s2);
	if (ret)
		return (-1);
	else
		return (0);
}
