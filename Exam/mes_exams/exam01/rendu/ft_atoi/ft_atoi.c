int		ft_atoi(const char *str)
{
	int nb = 0;
	int i = 0;
	int neg = 0;

	while(str[i] == ' ' ||str[i] == '\t' ||str[i] == '\v' ||str[i] == '\n'||str[i] == '\r' ||str[i] == '\f')
		i++;
	if (nb < 0)
		neg++;
	if(str[i] == '+' ||str[i] == '-')
		i++;
	if (str[i] >= '0' || str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + (int)(str[i] - 48);
		i++;
	}
	if (neg == 1)
		return(-nb);
	else
		return(nb);
}
