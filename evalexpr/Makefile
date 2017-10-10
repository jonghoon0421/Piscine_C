# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jonkim <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/26 23:37:35 by jonkim            #+#    #+#              #
#    Updated: 2017/10/10 02:14:07 by jonkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
CC = gcc -Wextra -Wall -Werror
SRC = eval_expr.c main.c ft_stuff.c
OBJ = eval_expr.o main.o ft_stuff.o

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
		$(CC) -c $(SRC)
		$(CC) $(OBJ) -o $(NAME)

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re:	fclean all
