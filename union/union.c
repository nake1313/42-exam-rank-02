#include <unistd.h>

int ft_check(char *s1, char *s2)
{
	while(s1 > s2)
	{
		if(*s1 == *s2++)
			return (0);
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	char *p1;
	char *p2;

	p1 = s1;
	while (*s1)
	{
		if (ft_check(s1, p1))
			write(1, s1, 1);
	s1++;
	}
	p2 = s2;
	while (*s2)
	{
		if (ft_check(s2, p1) && ft_check(s2, p2))
			write(1, s2, 1);
	s2++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);
	}
	write(1, "\n", 1);
	return (0);
}
