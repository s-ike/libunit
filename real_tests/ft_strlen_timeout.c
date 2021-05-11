#include "libft.h"
#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	sleep(10);
	while (s[len])
		len++;
	return (len + 1);
}
