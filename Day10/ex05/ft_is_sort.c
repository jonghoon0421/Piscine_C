/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 20:13:13 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/21 21:18:39 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while ((i + 1) < length)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			i++;
		else
			return (0);
	}
	return (1);
}