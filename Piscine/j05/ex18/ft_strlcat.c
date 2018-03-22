/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 02:10:53 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/10 00:04:39 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	dsize;

	i = 0;
	dsize = 0;
	while (dest[dsize])
		dsize++;
	while (src[i])
	{
		if (dsize < size - 1)
			dest[dsize] = src[i];
		dsize++;
		i++;
	}
	dest[dsize - 1] = '\0';
	return (dsize);
}
