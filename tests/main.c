#include "strlen/strlen_tests.h"
#include "libunit.h"

int	main(void)
{
	int	result;

	result = 0;
	printf("\n");
	printf("*********************************\n");
	printf("** 42 - Unit Tests ****\n");
	printf("*********************************\n");
	result += strlen_launcher();
	// result += next_launcher();
	if (result)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
