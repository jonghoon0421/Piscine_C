/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 18:42:07 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/15 19:16:47 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	while (1)
	{
		if (!(*str <= 57 && *str >= 48))
			break ;
		if (*str == '\0')
			break ;
		str++;
	}
	if (*str <= 57 && *str >= 48)
		return (1);
	else if (*str == '\0')
		return (1);
	else
		return (0);
}