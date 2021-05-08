#include "libunit.h"

/**
 * @return
 */
int	launch_tests(t_unit_test **testlist)
{
	int	ret;

	ret = SUCCESS;
	(void)testlist;
	// testlistの中身を実行して結果をstdoutに出していく
		// > Basic test : [OK]
		// > NULL test : [SEGV]
	// 1/2 tests checked
	return (ret);
}
