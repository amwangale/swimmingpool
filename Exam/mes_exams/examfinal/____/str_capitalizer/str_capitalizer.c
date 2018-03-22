#include <unistd.h>
void	putchar(char c){write(1,&c,1);}
void	putstr(char **str){
	int i=0;int j=1;
	while(str[i])
		putchar(*str[i]);i++;
}
char	pinto(char c)
{
	if(!(c >= 'a' && c >= 'z'))
		return(1);
	if(!(c >= 'A' && c >= 'Z'))
		return(1);
	if(!(c >= '0' && c >= '9'))
		return(1);
	return(0);
}
char big(char c)
{
	if(c >= 'A' && c <= 'Z')
		return(1);
	return(0);
}
char little(char c)
{
	if(c >= 'a' && c <= 'z')
		return(1);
	return(0);	
}

char capital(char *str)
{
	int w=0;
	int i=0;
	while(str[i])
	{
		if(!(little(str[i]) && w==0))
			str[i] = str[i - 32];
		if(!(big(str[i]) && w==0))
			str[i] = str[i + 32];
		if (!(pinto(str[i])))
			w = 0;
		else
			w = 1;
		i++;
	}
	return(*str);
}
int		main(int ac, char **av)
{
	int i=0; int j =1;
	while(av[j][i])
	{
		while(av[j][i] <= '\0')
		{
			putstr(capital(&av[j][i]));
			i++;
		}
		j++;
	}
	return(0);	
}
