#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int i = -1;
	while(str[i++] != '\0')
	{
		ft_putchar(str[i]);
	}
}
char *rotone(char *str)
{
	int i=0;
	while(str[i] != '\0')
	{
		if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			ft_putchar(str[i]);	
			i++;
		}
		if((str[i] > 'a' || str[i] < 'z') && (str[i] > 'A' || str[i] < 'Z'))
		{
			write(1, "\nSAUT\n", 6);
			ft_putchar(str[i]);
			i++;	
		}
		if(str[i] == 'a' || str[i] == 'A')
		{
			str[i] = str[i] + 25;
			ft_putchar(str[i]);
			i++;
		}
		if(str[i] == 'z' || str[i]== 'Z')
		{
			str[i]	= str[i] - 25;
			ft_putchar(str[i]);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	return(str);
}

int		main(int argc, char **argv)
{
	int i=1;int j=0;
	if(argc == 2)
	{
		if(argv[i][j])
		{
			ft_putstr(rotone(argv[i]));
			write(1, "\nle if est passé\n", 17);
		}
		else
			write(1, "\nle if est PAS passé\n", 20);
		ft_putchar('\n');
	}
	if(argc != 1)
		ft_putchar('\n');
	return(0);
}
