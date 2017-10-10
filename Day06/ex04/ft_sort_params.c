/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 00:13:32 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/16 17:22:18 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(char *str)
{
	int i;
	int j;

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

int		ft_compare(char *s1, char *s2)
{
	while (1)
	{
		if (*s1 != *s2)
			break ;
		if (*s1 == '\0')
			break ;
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

void	ft_sort(char **arg, int iterat)
{
	int		i;
	int		check;
	char	*swap;

	i = 0;
	check = 0;
	while (check != 1)
	{
		i = 0;
		check = 1;
		while (i < iterat - 1)
		{
			if (ft_compare(arg[i], arg[i + 1]) > 0)
			{
				check = 0;
				swap = arg[i];
				arg[i] = arg[i + 1];
				arg[i + 1] = swap;
			}
			i++;
		}
	}
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	ft_sort(av + 1, ac - 1);
	while (i < ac)
	{
		ft_print(av[i]);
		i++;
	}
	return (0);
}
