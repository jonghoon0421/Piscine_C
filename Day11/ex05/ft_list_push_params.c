/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 22:34:16 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/23 21:12:32 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*trans;
	int		i;

	i = 0;
	list = NULL;
	trans = NULL;
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = trans;
		trans = list;
		i++;
	}
	return (list);
}
