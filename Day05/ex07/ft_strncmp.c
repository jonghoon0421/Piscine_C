/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 02:44:32 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/15 14:22:32 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*s1 != *s2)
			break ;
		if (*s1 == 0)
			break ;
		s1++;
		s2++;
		i++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
