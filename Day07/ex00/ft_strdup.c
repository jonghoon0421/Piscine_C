/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 11:39:13 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/17 22:23:42 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*copy;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	copy = (char*)malloc(sizeof(*copy) * (i + 1));
	while (src[j] != '\0')
	{
		copy[j] = src[j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}
