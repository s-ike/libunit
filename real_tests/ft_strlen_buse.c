#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;
	char	*str = "test";

	(void)s;
	str[0] = '0';
	len = 0;
	while (str[len])
		len++;
	return (len);
}
