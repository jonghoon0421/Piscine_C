/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 18:17:42 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/17 21:04:56 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_size(int ac, char **av)
{
	int i;
	int j;
	int k;

	i = 1;
	k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != 0)
		{
			k++;
			j++;
		}
		i++;
	}
	if (ac > 1)
		k = k + ac - 2;
	return (k);
}

char	*ft_concat_params(int ac, char **av)
{
	int		i;
	int		j;
	int		k;
	int		size;
	char	*list;

	size = ft_size(ac, av);
	list = (char*)malloc(sizeof(char) * (size + 1));
	i = 1;
	k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			list[k++] = av[i][j++];
		if (i < ac)
			list[k++] = '\n';
		i++;
	}
	list[k - 1] = '\0';
	return (list);
}
