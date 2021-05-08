#include "strlen/strlen_tests.h"
#include "libunit.h"

int	main(void)
{
	int	result;

	printf("\n");
	printf("*********************************\n");
	printf("** 42 - Unit Tests ****\n");
	printf("*********************************\n");
	result = strlen_launcher();
	if (result == FAILURE)
		;	// next_launcher();
	else
		;	// result = next_launcher();
	return (result);
}
