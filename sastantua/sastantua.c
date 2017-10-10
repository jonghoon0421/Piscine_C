/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 04:20:59 by jonkim            #+#    #+#             */
/*   Updated: 2017/10/10 14:45:49 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	frame(int linesize)
{
	int		i;

	i = 0;
	while (i < linesize)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('/');
	while (i < linesize - 2)
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	doordollar(int width, int dollarline)
{
	int		i;
	int		position;

	i = 0;
	position = width - 1;
	while (i <= width)
	{
		if ((i == position) && (i == dollarline))
			ft_putchar('$');
		else
			ft_putchar('|');
		i++;
	}
}

void	doorframe(int linesize, int doorheight, int dollarline)
{
	int		width;
	int		position;
	int		i;

	i = 0;
	width = doorheight;
	position = (linesize / 2) - width;
	while (i < linesize)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('/');
	while (i < position)
	{
		ft_putchar('*');
		i++;
	}
	if (dollarline == 1)
		doordollar(width, dollarline);
	i = 0;
	while (i < linesize - 2)
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

int		dollarline(int doorheight, int line)
{
	int		yposition;

	yposition = (doorheight / 2) + 1;
	if (yposition == line)
		return (1);
	else
		return (0);
}

void	sastantua(int size)
{
	int		floor;
	int		doorheight;
	int		linesize;
	int		i;
	int		j;
	int		k;

	i = 1;
	k = 0;
	linesize = 0;
	doorheight = size;

	while (i <= size)
	{
		j = 0;
		floor = i + 1;
		while (j <= floor)
		{
			linesize = (k / 2) + 3;
			if (i != size)
				frame(linesize);
			else if ((i == size) && (k >= floor - doorheight))
				doorframe(linesize, size, dollarline(doorheight, j));
			j++;
			k++;
		}
		i++;
	}
}

int		main()
{
	sastantua(2);
	return (0);
}
