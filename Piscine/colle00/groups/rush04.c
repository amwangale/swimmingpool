void	ft_putchar(char c);

void 	rush(int x, int y)
{
	int i;
	int j;

	i = x;
	j = y;
	while(j > 0)
	{
		while(i > 0)
		{
			if((i == x && j == y) || ((i == 1 && j == 1) && y > 1 && j != 1))
				ft_putchar('A');
			else if((i ==  1 && j == y) || (i == x && j == 1))
				ft_putchar('C');
			else if (i == 1 && j == 1)
				ft_putchar('A');
			else if(((j == y || j == 1) || (i == x || i == 1)) || (((i == x) &&
				   	(j != y )) && (j != 0) && (i == 1)))
			{
				ft_putchar('B');
			}
			else 
				ft_putchar(' ');
			i--;
		}
		i = x;
		ft_putchar('\n');
		j--;
	}
}
