/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 15:49:51 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/17 20:59:58 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *nums;

	if (min >= max)
		return (0);
	nums = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min + i < max)
	{
		nums[i] = min + i;
		i++;
	}
	return (nums);
}
