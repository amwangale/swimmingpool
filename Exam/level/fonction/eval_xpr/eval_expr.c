/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 23:31:51 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/26 00:49:30 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tools.h"
#include "eval_expr.h"

int	number_check(char **str)
{
	int nbr;

	while (**str == ' ')
		(*str)++; 
	if (**str == '(')                  // PARENTHESES
	{
		(*str)++;
		nbr = calc_check2(str);
		if (**str == ')')
			(*str)++;
		return (nbr);
	}
	return (ft_atoi(str));
}

int	calc_check1(char **str)
{
	int		nbr;
	int		nbr2;
	char	op;

	nbr = number_check(str);
	while (**str)
	{
		while (**str == ' ')            // GRAND OPERATEUR : * / %
			(*str)++;
		op = **str;
		if (op != '/' && op != '*' && op != '%')
			return (nbr);
		(*str)++;
		nbr2 = number_check(str);
		if (op == '/')
			nbr /= nbr2;
		else if (op == '*')
			nbr *= nbr2;
		else
			nbr %= nbr2;
	}
	return (nbr);
}

int	calc_check2(char **str)
{
	int		nbr;
	int		nbr2;
	char	op;

	nbr = calc_check1(str);      	////// PETIT OPERATEUR   ADDITION SOUSTRACTION
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		op = **str;
		if (op != '+' && op != '-')
			return (nbr);
		(*str)++;
		nbr2 = calc_check1(str);
		if (op == '+')
			nbr += nbr2;
		else
			nbr -= nbr2;
	}
	return (nbr);
}

int	eval_expr(char *str)
{
	return (calc_check2(&str));
}
