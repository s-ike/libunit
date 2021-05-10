#include "real_tests.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		uc;

	str = s;
	uc = c;
	while (n--)
	{
		if (*str++ == uc)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
