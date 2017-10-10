/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 13:28:17 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/10 16:20:28 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char	str[3];

	while (str[0] <= 7)
	{
		str[1] = str[0] + 1;
		while (str[1] <= 8)
		{
			str[2] = str[1] + 1;
			while (str[2] <= 9)
			{
				ft_putchar(str[0] + 48);
				ft_putchar(str[1] + 48);
				ft_putchar(str[2] + 48);
				if (str[0] != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				str[2]++;
			}
			str[1]++;
		}
		str[0]++;
	}
}
