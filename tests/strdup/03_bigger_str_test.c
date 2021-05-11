#include "strdup_tests.h"

int	strdup_bigger_str_test(void)
{
	char	s1[2048];
	char	*s2;
	int		len;
	int		ret;

	len = 2047;
	s1[len--] = '\0';
	while (len--)
		s1[len] = 'a';
	s2 = ft_strdup(s1);
	ret = strcmp(s1, s2);
	free(s2);
	if (ret)
		return (-1);
	else
		return (0);
}
