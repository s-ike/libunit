#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <stdio.h>
# include <signal.h>

# define SUCCESS 0
# define FAILURE -1

# define FORK_FAIL SIGUSR1
# define UNKNOWN SIGUSR2

# define TIME_LIMIT 2

# define CRL_RED "\x1b[31m"
# define CRL_GREEN "\x1b[32m"
# define CRL_YELLOW "\x1b[33m"
# define CRL_BLUE "\x1b[34m"
# define CRL_MAGENTA "\x1b[35m"
# define CRL_CYAN "\x1b[36m"
# define CRL_WHITE "\x1b[37m"
# define CRL_DEFAULT "\x1b[39m"

# define PUT_OK "[OK]"
# define PUT_KO "[KO]"
# define PUT_SEGV "[SEGV]"
# define PUT_BUSE "[BUSE]"
# define PUT_TIMEOUT "[TIMEOUT]"
# define PUT_UNKNOWN "[UNKNOWN]"
# define PUT_FORKFAIL "Fork failed"

typedef struct s_unit_test
{
	const char			*testname;
	int					(*test)(void);
	struct s_unit_test	*next;
}	t_unit_test;

void	load_test(
			t_unit_test **testlist, const char *testname, int (*test)(void));
int		launch_tests(t_unit_test **testlist);
/* clear_test.c */
void	clear_test(t_unit_test **testlist);
/* error.c */
void	put_error(const char *msg);

#endif
