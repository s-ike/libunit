#include "strlen/strlen_tests.h"
#include "atoi/atoi_tests.h"
#include "strdup/strdup_tests.h"
#include "memchr/memchr_tests.h"
#include "libunit.h"

int	main(void)
{
	int	result;

	start_tests();
	result = 0;
	result += strlen_launcher();
	result += atoi_launcher();
	result += strdup_launcher();
	result += memchr_launcher();
	end_tests();
	if (result)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
