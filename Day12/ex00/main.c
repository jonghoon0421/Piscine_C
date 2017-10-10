/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 14:58:10 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/24 23:32:10 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 100

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		errorcheck(int a)
{
	if (a == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (a > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	return (0);
}

int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (errorcheck(ac) == 1)
		return (0);
	fd = open(av[1], O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		write(1, buf, ret);
	}
	close(fd);
	return (0);
}
