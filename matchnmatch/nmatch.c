/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 19:19:51 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/20 23:23:46 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (1);
	else if (*s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (*s1 == 0 ? nmatch(s1, s2 + 1)
				: (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1)));
	else
		return (0);
}
