#include "strdup_tests.h"

int	basic_test(void)
{

	const char *s1 = "Hello";
	char *s2;

	s2 = ft_strdup(s1);
	if (strcmp(s1, s2) & free(s2))
		return (-1);
	else
		return (0);
}
