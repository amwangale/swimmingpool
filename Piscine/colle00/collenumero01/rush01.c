/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_temp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 07:07:21 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/25 05:23:40 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_top(int x)
{
	if (x == 1)
	{
		ft_putchar('/');
	}
	if (x == 2)
	{
		ft_putchar(92);
		ft_putchar('/');
	}
	if (x > 2)
	{
		int i;

		i = 0;
		ft_putchar('/');
		while (x - 2 > i)
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar(92);
	}
}

void	ft_mid(int x, int y)
{
	if (x == 1)
	{
		ft_putchar('*');
	}
	if (x == 2 && y != 0)
	{
		ft_putchar('*');
		ft_putchar('*');
	}
	if (x > 2)
	{
		int i;

		i = 0;
		ft_putchar('*');
		while (x - 2 > i)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('*');
	}
}

void	ft_bot(int x)
{
	if (x == 1)
	{
		ft_putchar('/');
	}
	if (x == 2)
	{
		ft_putchar('/');
		ft_putchar(92);
	}
	if (x > 2)
	{
		int i;

		i = 0;
		ft_putchar(92);
		while (x-2 > i)
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar('/');
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
