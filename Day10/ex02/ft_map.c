/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 17:28:47 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/21 19:45:59 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *new;

	i = 0;
	new = (int*)malloc(sizeof(int) * length);
	while (length > i)
	{
		new[i] = f(tab[i]);
		i++;
	}
	return (new);
}
