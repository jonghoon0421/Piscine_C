/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 21:51:20 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/22 01:31:35 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}

int		ft_subt(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}

int		ft_mult(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}

int		ft_mod(int a, int b)
{
	int result;

	result = a % b;
	return (result);
}

int		ft_div(int a, int b)
{
	int result;

	result = a / b;
	return (result);
}
