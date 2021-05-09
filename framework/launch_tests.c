#include "libunit.h"

/**
 * @return
 */
int	launch_tests(t_unit_test **testlist)
{
	t_unit_test	*current;
	int			ret;

	ret = SUCCESS;
	// testlistの中身を実行して結果をstdoutに出していく
		// > Basic test : [OK]
		// > NULL test : [SEGV]
	// 1/2 tests checked
	if (!testlist)
		return (FAILURE);
	current = *testlist;
	while (current)
	{
		printf("%s\n", current->testname);
		current = current->next;
	}
	// TODO; testlist解放
	return (ret);
}
