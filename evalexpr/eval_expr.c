/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 18:16:39 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/28 21:49:10 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stuff.h"
#include "eval_expr.h"

int		parse_atoms(char **eqn)
{
	int res;

	while (**eqn == ' ')
		(*eqn)++;
	if (**eqn == '(')
	{
		(*eqn)++;
		res = parse_summands(eqn);
		if (**eqn == ')')
			(*eqn)++;
		return (res);
	}
	return (ft_atoi(eqn));
}

int		parse_factors(char **eqn)
{
	int		num1;
	int		num2;
	char	op;

	num1 = parse_atoms(eqn);
	while (**eqn)
	{
		while (**eqn == ' ')
			(*eqn)++;
		op = **eqn;
		if (op != '*' && op != '/' && op != '%')
			return (num1);
		(*eqn)++;
		num2 = parse_atoms(eqn);
		if (op == '*')
			num1 = num1 * num2;
		else if (op == '/')
			num1 = num1 / num2;
		else
			num1 = num1 % num2;
	}
	return (num1);
}

int		parse_summands(char **eqn)
{
	int		num1;
	int		num2;
	char	op;

	num1 = parse_factors(eqn);
	while (**eqn)
	{
		while (**eqn == ' ')
			(*eqn)++;
		op = **eqn;
		if (op != '+' && op != '-')
			return (num1);
		(*eqn)++;
		num2 = parse_factors(eqn);
		if (op == '+')
			num1 = num1 + num2;
		else
			num1 = num1 - num2;
	}
	return (num1);
}

int		eval_expr(char *eqn)
{
	return (parse_summands(&eqn));
}
