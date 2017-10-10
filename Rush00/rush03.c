/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 00:25:37 by abarnett          #+#    #+#             */
/*   Updated: 2017/08/13 20:33:50 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	print_line(char a, char b, char c, int len);

void	rush(int x, int y)
{
	int i;

	if (x < 0 || y < 0)
		return ;
	if (y > 0)
		print_line('A', 'B', 'C', x);
	i = 0;
	while (i < (y - 2))
	{
		print_line('B', ' ', 'B', x);
		++i;
	}
	if (y > 1)
		print_line('A', 'B', 'C', x);
}

void	print_line(char a, char b, char c, int len)
{
	int i;

	if (len > 0)
		ft_putchar(a);
	i = 0;
	while (i < (len - 2))
	{
		ft_putchar(b);
		++i;
	}
	if (len > 1)
		ft_putchar(c);
	ft_putchar('\n');
}
