/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 09:14:33 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/25 09:14:34 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *tmp;
	int i;

	if ((tmp = (int*)malloc(sizeof(int) * length)) == NULL)
		return (NULL);
	i = -1;
	while (++i < length)
		tmp[i] = (*f)(tab[i]);
	return (tmp);
}
