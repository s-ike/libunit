#include "real_tests.h"

size_t	ft_strlen_ko(const char *s)
{
	size_t	len;

	len = 1;
	while (s[len])
		len++;
	return (len);
}
