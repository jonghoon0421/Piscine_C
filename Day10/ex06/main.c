/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 23:31:20 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/22 16:07:14 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		errorcheck(char oper, int a)
{
	if (a == 0)
	{
		if (oper == '/')
		{
			ft_putstr("Stop : division by zero\n");
			return (1);
		}
		else if (oper == '%')
		{
			ft_putstr("Stop : modulo by zero\n");
			return (1);
		}
	}
	return (0);
}

int		main(int ac, char **av)
{
	int		i;
	char	*operator;

	i = 0;
	operator = "+-*%/\0";
	if (ac != 4)
		return (0);
	if (errorcheck(av[2][0], ft_atoi(av[3])) == 1)
		return (0);
	while (operator[i] != '\0')
	{
		if (operator[i] == av[2][0])
		{
			ft_putnbr(g_oper[i](ft_atoi(av[1]), ft_atoi(av[3])));
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
