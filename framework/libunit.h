#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <stdio.h>
# include <signal.h>

# define SUCCESS 0
# define FAILURE -1

typedef struct s_unit_test
{
	const char			*testname;
	int					(*test)(void);
	struct s_unit_test	*next;
}	t_unit_test;

void	load_test(
			t_unit_test **testlist, const char *testname, int (*test)(void));
int		launch_tests(t_unit_test **testlist);
/* error.c */
void	put_error(const char *msg);

#endif
