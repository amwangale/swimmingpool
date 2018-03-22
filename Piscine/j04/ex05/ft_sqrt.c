/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 03:02:28 by wabousfi          #+#    #+#             */
/*   Updated: 2018/03/01 03:02:29 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int result;

	result = 1;
	if (nb == 0)
		return (0);
	while (result * result < nb)
		result++;
	if (nb % result == 0 && result * result == nb)
		return (result);
	return (0);
}
