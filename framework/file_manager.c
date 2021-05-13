#include "libunit.h"

void
	start_tests(void)
{
	printf("\n");
	printf("%s", CRL_CYAN);
	printf("*********************************\n");
	printf("**      42 - Unit Tests      ****\n");
	printf("*********************************\n");
	printf("%s", CRL_DEFAULT);
	printf("\n");
	g_fp = fopen("test_report", "w");
	fflush(stdout);
}

void
	end_tests(void)
{
	fclose(g_fp);
	printf("%s", CRL_CYAN);
	printf("~~~~~~~~~~~~  fin  ~~~~~~~~~~~~~~\n");
	printf("%s", CRL_DEFAULT);
	printf("\n");
	fflush(stdout);
}

void
	double_puts_string(
		FILE *fp, const char *clr, const char *s1, const char *s2)
{
	fprintf(fp, "%s%s", s1, s2);
	if (clr)
		printf("%s%s%s%s", clr, s1, s2, CRL_DEFAULT);
	else
		printf("%s%s", s1, s2);
	fflush(fp);
	fflush(stdout);
}

void
	double_puts_num(FILE *fp, const int n1, const int n2, const char *s)
{
	fprintf(fp, "%d/%d %s", n1, n2, s);
	printf("%d/%d %s", n1, n2, s);
	fflush(fp);
	fflush(stdout);
}
