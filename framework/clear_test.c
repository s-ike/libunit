#include "libunit.h"

static void
	testlist_delone(t_unit_test *testlist)
{
	if (!testlist)
		return ;
	testlist->testname = NULL;
	testlist->test = NULL;
	free(testlist);
}

void
	clear_test(t_unit_test **testlist)
{
	t_unit_test	*prev;
	t_unit_test	*current;

	if (!testlist)
		return ;
	current = *testlist;
	while (current)
	{
		prev = current;
		current = current->next;
		testlist_delone(prev);
	}
	*testlist = NULL;
}
