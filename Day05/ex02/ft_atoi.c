/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 14:20:12 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/15 20:22:55 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int	i;
	int	n;
	int negative;

	i = 0;
	n = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		negative = 1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while ((str[i] <= 57) && (str[i] >= 48))
	{
		n = n * 10;
		n = n + (str[i] - '0');
		i++;
	}
	if (negative == 1)
		return (-n);
	else
		return (n);
}
