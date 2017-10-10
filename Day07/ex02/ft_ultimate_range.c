/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 17:18:56 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/16 21:30:20 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int*)malloc(sizeof(int) * (max - min + 1));
	i = 0;
	while (min + i < max)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (i);
}
