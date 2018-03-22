/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 07:01:11 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/15 07:01:12 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	dest = malloc(sizeof(char) * size);
	if (dest == 0)
		return (0);
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*stock;

	stock = malloc(sizeof(t_stock_par) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		stock->str = av[i];
		stock->copy = ft_strdup(av[i]);
		stock->size_param = ft_strlen(av[i]);
		stock->tab = ft_split_whitespaces(av[i]);
		i++;
		stock++;
	}
	stock->str = 0;
	return (stock - i);
}
