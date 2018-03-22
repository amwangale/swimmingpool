/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 06:57:09 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/11 06:59:10 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int		a;
	char	begin;
	char	end;

	a = 0;
	while (a++ < 9899)
	{
		begin = a / 100;
		end = a % 100;
		if (begin < end)
		{
			if (a != 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar('0' + begin / 10);
			ft_putchar('0' + begin % 10);
			ft_putchar(' ');
			ft_putchar('0' + end / 10);
			ft_putchar('0' + end % 10);
		}
	}
}
