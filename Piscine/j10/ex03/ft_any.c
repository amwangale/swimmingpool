/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 09:15:08 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/25 09:15:09 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = -1;
	while (tab[++i] != 0)
		if ((*f)(tab[i]) == 1)
			return (1);
	return (0);
}
