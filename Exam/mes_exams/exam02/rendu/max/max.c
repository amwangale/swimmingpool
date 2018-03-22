int		max(int *tab, unsigned int len)
{
	len = 0;int *compar = NULL;	
	if(tab[len]==NULL)
		return(0);
	while(tab[len])
	{
		tab[len] = compar[len];
		while(tab[len])
			return(tab[len] - compar[len]);
		len++;
	}
	while(tab[len])
		return(tab[len] - compar[len]);	
	return(1);
}
