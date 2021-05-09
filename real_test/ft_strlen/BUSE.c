
// LinuxではSEGV、MacではBus error
size_t	ft_strlen(const char *s)
{
	char *s = "test";
	s[0] = '0';
	return -1;
}

// nmapで確保した領域外を触るとSIGBUSが出る

// #include <sys/mman.h>
// #include <fcntl.h>
// #include <stdio.h>

// size_t	ft_strlen(const char *s)
// {
// 	FILE *f = tmpfile();
// 	int *m = (int*)mmap(0, 4, PROT_WRITE, MAP_PRIVATE, fileno(f), 0);
// 	*m = 0;
// 	return -1;
// }
