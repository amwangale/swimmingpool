#include <unistd.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	negativ;
	int	nbr;

	i = 0;
	negativ = 0;
	nbr = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		negativ = 1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr *= 10;
		nbr += ((int)str[i] - 48);
		i++;
	}
	if (negativ == 1)
		return (-nbr);
	else
		return (nbr);
}
