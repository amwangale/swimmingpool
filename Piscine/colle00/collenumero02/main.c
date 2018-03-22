/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 10:37:46 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/25 04:41:09 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	ft_bot(int x);
void 	ft_mid(int x, int y);
void 	ft_top(int x);
void	ft_putchar(char c);
int	ft_atoi(char *str);

int		main(int ac, char **av)
{
	if(ac == 3)
	{
		rush(ft_atoi(av[1]), ft_atoi(av[2]));	
		ft_putchar('\n');
	}
	return(0);
}
