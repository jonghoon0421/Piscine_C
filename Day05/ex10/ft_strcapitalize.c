/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 14:31:52 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/15 19:35:29 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] <= 122 && str[0] >= 97)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) && (str[i - 1] == ' '))
			str[i] = str[i] - 32;
		else
		{
			if ((str[i] >= 65 && str[i] <= 90) && str[i - 1] != ' ')
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
