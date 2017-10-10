/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 22:13:56 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/22 16:06:56 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>

int			ft_add(int a, int b);
int			ft_subt(int a, int b);
int			ft_mult(int a, int b);
int			ft_mod(int a, int b);
int			ft_div(int a, int b);
void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_putnbr(int nb);
int			ft_atoi(char *str);

typedef	int	(*t_myfunc)(int, int);
t_myfunc	g_oper[] = {ft_add, ft_subt, ft_mult, ft_mod, ft_div};

#endif
