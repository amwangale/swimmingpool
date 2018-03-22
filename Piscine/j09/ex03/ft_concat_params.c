/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 05:33:23 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/22 20:15:28 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*init_str(int argc, char **argv)
{
	int		k;
	int		j;
	int		len;
	char	*str;

	k = 1;
	len = 0;
	while (k < argc)
	{
		j = 0;
		while (argv[k][j])
			j++;
		len = j + 1;
		k++;
	}
	str = (char*)malloc((sizeof(*str)) * (len));
	return (str);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		k;
	int		j;
	int		i;
	char	*str;

	i = 0;
	str = init_str(argc, argv);
	k = 1;
	while (k < argc)
	{
		j = 0;
		while (argv[k][j])
			str[i++] = argv[k][j++];
		if (k != argc - 1)
			str[i++] = '\n';
		k++;
	}
	str[i] = '\0';
	return (str);
}
