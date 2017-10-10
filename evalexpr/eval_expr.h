/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 23:34:33 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/27 16:35:19 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

int		eval_expr(char *eqn);
int		parse_summands(char **eqn);
int		parse_factors(char **eqn);
int		parse_atoms(char **eqn);

#endif
