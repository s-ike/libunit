#include <limits.h>

static int	ft_isspace(int c)
{
	if (c == ' ' || (9 <= c && c <= 13))
		return (1);
	return (0);
}

int		ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int			ft_atoi(char *str)
{
	unsigned long long	num;
	int					neg;

	num = 0;
	neg = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		if (num >> 60 || (num = num * 10 + *str++ - '0') >> 63)
			return (num = neg == -1 ? LONG_MIN : LONG_MAX);
	}
	return (neg * num);
}
