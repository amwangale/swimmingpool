/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 03:08:27 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/24 03:09:51 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
