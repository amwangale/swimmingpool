/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 18:58:21 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/21 23:39:09 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tmp;
	int i;

	if (min >= max)
		return (0);
	if (max - min > 1)
		max--;
	i = 0;
	tmp = (int*)malloc(sizeof(int) * (max - min));
	if (tmp == (void*)NULL)
	{
		*range = (void*)NULL;
		return (0);
	}
	while (i <= (max - min))
	{
		tmp[i] = i + min;
		i++;
	}
	*range = tmp;
	return (i);
}
