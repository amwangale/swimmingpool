#include <unistd.h>

void	ft_putchar(char c){write(1, &c, 1);}

void	replace(char *d, char a, char b)
{
	int i=0;
	while(d[i] != '\0')
	{
		if(d[i] == a)
			ft_putchar(b);
		else
			ft_putchar(d[i]);
		i++;
	}
}

int     main(int ac, char **av)
{
	if (ac == 4)
	{
		if(!(av[3][1]!='\0'||av[2][1]!='\0'))
		{
			replace(av[1],av[2][0],av[3][0]);
		}
	}
	write(1, "\n", 1);
	return(0);
}


