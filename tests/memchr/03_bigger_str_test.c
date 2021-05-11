#include "memchr_tests.h"

int	memchr_bigger_str_test(void)
{
	char	s[2050];
	int		len;

	len = 2049;
	s[len--] = 't';
	s[len--] = 'f';
	while (len--)
		s[len] = 'a';
	if (ft_memchr(s, 't', 10000) == memchr(s, 't', 10000))
		return (0);
	else
		return (-1);
}
