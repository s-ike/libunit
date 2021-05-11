#include "strlen_tests.h"

int	strlen_bigger_str_test(void)
{
	int		len;
	char	s[2048];

	len = 2047;
	s[len--] = '\0';
	while (len--)
		s[len] = 'a';
	if (ft_strlen(s) == strlen(s))
		return (0);
	else
		return (-1);
}
