#include "strdup_tests.h"

int	null_test(void)
{
	const char	*s1 = NULL;
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
