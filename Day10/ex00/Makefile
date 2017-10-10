# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jonkim <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 14:57:16 by jonkim            #+#    #+#              #
#    Updated: 2017/08/22 15:32:51 by jonkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc -Wextra -Wall -Werror -c

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strcmp.c srcs/ft_strlen.c

HEADER_DIR = includes

dot5 = ft_putchar.o ft_putstr.o ft_strlen.o ft_strcmp.o ft_swap.o

all: $(NAME)

$(NAME):
		$(CC) $(SRC) -I$(HEADER_DIR)
		ar rc $(NAME) $(dot5)
		ranlib $(NAME)

clean:
		/bin/rm -f $(dot5)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
