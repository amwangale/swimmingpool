/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 01:43:11 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/06 01:43:13 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	cfp;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			cfp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = cfp;
			i = 0;
		}
		else
			i++;
	}
}
