#include "libunit.h"

static t_unit_test
	*testlist_new(const char *testname, int (*test)(void))
{
	t_unit_test	*new;

	if (!(new = malloc(sizeof(t_unit_test))))
		return (NULL);
	new->testname = testname;
	new->test = test;
	new->next = NULL;
	return (new);
}

static t_unit_test
	*testlist_last(t_unit_test *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

static void
	testlist_addback(t_unit_test **testlist, t_unit_test *new)
{
	t_unit_test	*tmp;

	if (!testlist || !new)
		return ;
	if (!*testlist)
	{
		*testlist = new;
		return ;
	}
	tmp = testlist_last(*testlist);
	tmp->next = new;
}

void
	load_test(t_unit_test **testlist, const char *testname, int (*test)(void))
{
	t_unit_test	*new;

	new = testlist_new(testname, test);
	if (!new)
	{
		put_error("malloc failed");
		return ;
	}
	testlist_addback(testlist, new);
}
