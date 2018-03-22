#include <unistd.h>
#include <stdlib.h>
void	putchar(char c){write(1,&c,1);}
void	putstr(char *str){int i=0;while(str[i]){putchar(str[i]);i++;}}

void	tab_mult(int nb)
{
	int result;
	int	multip = 1;
	while(nb>0 && multip < 9)
	{
		putstr(multip);
		putchar(' ');
		putchar('x');
		putchar(' ');
		result = nb * multip;
		putstr(nb);
		putchar(' ');
		putchar('=');
		putchar(' ');
		putstr(result);
		putchar('\n');
		multip++;	
		if(multip==9)
			write(1, "ca_marche_pas_bg\n", 17); 
	}
}

int		main(int ac, char **av)
{
	if(ac ==2)
	{
		tab_mult(av[1]);
	}
	write(1, "\n", 1);
	return(0);
}
