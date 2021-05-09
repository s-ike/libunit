#include "libunit.h"

static size_t
	util_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

void
	put_error(const char *msg)
{
	write(STDERR_FILENO, msg, util_strlen(msg));
	write(STDERR_FILENO, "\n", 1);
}
