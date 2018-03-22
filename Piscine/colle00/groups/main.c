void 	rush(int x, int y);
void	ft_putchar(char c);
int	ft_atoi(char *str);

int		main(int ac, char **av)
{
	if(ac == 3)
	{
		rush(ft_atoi(av[1]), ft_atoi(av[2]));
	}
	return(0);
}
