#include "strlen.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (*s++)
	{
		i++;
	}
	return (i);
}