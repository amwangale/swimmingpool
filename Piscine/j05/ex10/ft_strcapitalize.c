/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 02:10:19 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/10 00:02:10 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		printo(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int		big(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

char	little(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (str[i])
	{
		if ((little(str[i])) && (w == 0))
			str[i] = str[i] - 32;
		else if ((big(str[i])) && (w == 1))
			str[i] = str[i] + 32;
		if (!(printo(str[i])))
			w = 0;
		else
			w = 1;
		i++;
	}
	return (str);
}
