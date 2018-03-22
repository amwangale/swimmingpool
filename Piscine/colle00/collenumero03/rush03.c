/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_temp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 07:07:21 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/25 05:07:29 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_top(int x)
{
	if (x == 1)
	{
		ft_putchar('A');
	}
	if (x == 2)
	{
		ft_putchar('A');
		ft_putchar('C');
	}
	if (x > 2)
	{
		int i;

		i = 0;
		ft_putchar('A');
		while (x - 2 > i)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('C');
	}
}

void	ft_mid(int x, int y)
{
	if (x == 1)
	{
		ft_putchar('B');
	}
	if (x == 2 && y != 0)
	{
		ft_putchar('B');
		ft_putchar('B');
	}
	if (x > 2)
	{
		int i;

		i = 0;
		ft_putchar('B');
		while (x - 2 > i)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('B');
	}
}

void	ft_bot(int x)
{
	if (x == 1)
	{
		ft_putchar('A');
	}
	if (x == 2)
	{
		ft_putchar('C');
		ft_putchar('A');
	}
	if (x > 2)
	{
		int i;

		i = 0;
		ft_putchar('A');
		while (x-2 > i)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('C');
	}
}

void	rush(int x, int y)
{
	if (y == 1)
	{
		ft_top(x);
	}
	if (y == 2)
	{
		ft_top(x);
		ft_putchar('\n');
		ft_bot(x);
	}
	if (y > 2)
	{
		int i;

		i = 0;
		ft_top(x);
		ft_putchar('\n');
		while (i < y - 2)
		{
			ft_mid(x, y - 2);
			ft_putchar('\n');
			i++;
		}
		ft_bot(x);
	}
}
