#include <limits.h>
int main(int argc, char const *argv[])
{
	printf("%d\n", atoi("2147483648"));
	printf("%d\n", atoi("a"));
	printf("%d\n", atoi("a10a"));
	printf("%d\n", atoi("10a"));
	printf("%d\n", atoi("++10a"));
	printf("%d\n", atoi("--10a"));
	printf("%d\n", atoi("  -10a"));
	printf("%d\n", atoi("  \t-10a"));
	printf("%d\n", atoi("  +-10a"));
	printf("%d\n", atoi("4294967295")); // ULONG_MAX
	return 0;
}
