char    *ft_strrev(char *str)
{
	int size=0;
	int i=0;
	char tmp;
	while(str[size])
		size++;
	size--;
	while(i < size)
	{
		tmp = str[size];
		str[size] = str[i];
		str[i] = tmp;
		i++;
		size--;
	}
	return(str);
}
