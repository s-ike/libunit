#include "strlen/strlen_tests.h"
#include "libunit.h"

int	main(void)
{
	int	result;

	result = SUCCESS;
	printf("\n");
	printf("*********************************\n");
	printf("** 42 - Unit Tests ****\n");
	printf("*********************************\n");
	result += strlen_launcher();
	// result += next_launcher();
	if (result != SUCCESS)
		return (FAILURE);
	return (result);
}
