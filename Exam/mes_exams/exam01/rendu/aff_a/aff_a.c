#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i] != '\0')
		{
			if(av[1][i] == 'a')
				ft_putchar('a');
			i++;
		}
	}
	else
		ft_putchar('a');
	ft_putchar('\n');
	return(0);
}
