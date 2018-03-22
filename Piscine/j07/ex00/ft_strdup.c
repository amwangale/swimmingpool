/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 05:24:23 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/21 23:38:58 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		srcsize;
	int		i;

	srcsize = 0;
	i = 0;
	while (src[srcsize])
		srcsize++;
	ptr = (char*)malloc(sizeof(*ptr) * (srcsize + 1));
	while (i < srcsize)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[srcsize] = '\0';
	return (ptr);
}
