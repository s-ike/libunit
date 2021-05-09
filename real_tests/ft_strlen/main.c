#include "strlen.h"

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;

	size_t a, b;

	a = strlen("a");
	b = ft_strlen(NULL);
	b = ft_strlen("a");
	if (a == b)
		printf("OK\n");
	else
		printf("KO\n");
	return 0;
}

