/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 14:58:10 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/24 23:31:46 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#define BUF_SIZE 3000

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
	return (0);
}

void	errormsg(char *str)
{
	ft_putstr("cat: ");
	ft_putstr(str);
	ft_putstr(": No such file or directory\n");
}

int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (errorcheck(ac) == 1)
		return (1);
	av++;
	while (*av)
	{
		fd = open(*av, O_RDONLY);
		if (fd == -1)
			errormsg(*av);
		else
		{
			while ((ret = read(fd, buf, BUF_SIZE)))
			{
				buf[ret] = '\0';
				write(1, buf, ret);
			}
		}
		close(fd);
		av++;
	}
	return (errno);
}
