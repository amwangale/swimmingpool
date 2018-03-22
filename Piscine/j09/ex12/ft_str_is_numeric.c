/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 02:10:27 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/10 00:03:23 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	num(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(num(str[i])))
			return (0);
		i++;
	}
	return (1);
}
