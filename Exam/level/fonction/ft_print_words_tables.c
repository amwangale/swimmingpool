char		**ft_split_whitespaces(char *str);
void		ft_putchar(char c);

void		ft_print_words_tables(char **tab)
{
	int i;
	int c;

	c = 0;
	while (tab[c] != 0)
	{
		i = 0;
		while (tab[c][i] != '\0')
			ft_putchar(tab[c][i++]);
		ft_putchar('\n');
		c++;
	}
}
