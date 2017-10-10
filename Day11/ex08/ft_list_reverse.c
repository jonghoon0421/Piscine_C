/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 17:57:34 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/23 21:14:48 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *list;
	t_list *temp;

	list = NULL;
	while (*begin_list)
	{
		temp = (*begin_list)->next;
		(*begin_list)->next = list;
		list = *begin_list;
		*begin_list = temp;
	}
	*begin_list = list;
}
