/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 23:17:35 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/16 12:58:53 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	while (j < i)
	{
		ft_putchar(str[j]);
		j++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	int k;

	k = 1;
	while (ac > k)
	{
		ft_print_params(av[k]);
		k++;
	}
	return (0);
}
