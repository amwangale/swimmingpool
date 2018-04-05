/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 01:42:48 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/06 01:44:43 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		count;
	int		size;
	char	temp;

	count = 0;
	size = 0;
	while (str[size])
		size++;
	size -= 1;
	while (count < size)
	{
		temp = str[size];
		str[size] = str[count];
		str[count] = temp;
		count++;
		size--;
	}
	return (str);
}
