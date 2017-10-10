/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 21:22:33 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/16 12:58:00 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_program_name(char *str)
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
	if (ac > 0)
		ft_print_program_name(av[0]);
	return (0);
}
