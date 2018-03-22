/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 05:25:05 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/21 23:39:06 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*pinto;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	pinto = (int*)malloc(sizeof(*pinto) * (max - min));
	while (min < max)
	{
		pinto[i] = min;
		min++;
		i++;
	}
	return (pinto);
}
