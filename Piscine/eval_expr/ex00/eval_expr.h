/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 23:32:03 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/25 23:32:42 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

int	eval_expr(char *expr);
int	calc_check1(char **expr);
int	calc_check2(char **expr);
int	number_check(char **expr);
#endif
