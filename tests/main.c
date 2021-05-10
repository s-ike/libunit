#include "strlen/strlen_tests.h"
#include "atoi/atoi_tests.h"
#include "strdup/strdup_tests.h"
#include "memchr/memchr_tests.h"
#include "libunit.h"

void	put_header(void)
{
	printf("\n");
	printf("*********************************\n");
	printf("**      42 - Unit Tests      ****\n");
	printf("*********************************\n");
	printf("\n");
}

int	main(void)
{
	int	result;

	put_header();
	result = 0;
	result += strlen_launcher();
	result += atoi_launcher();
	result += strdup_launcher();
	result += memchr_launcher();
	// result += next_launcher();
	if (result)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
