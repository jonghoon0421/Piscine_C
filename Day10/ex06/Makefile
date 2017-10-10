# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jonkim <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 23:23:13 by jonkim            #+#    #+#              #
#    Updated: 2017/08/22 16:08:15 by jonkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
FUNCTIONS = ft_stuff ft_operations
FLAGS = -Wall -Wextra -Werror
OBJS = ft_stuff.o ft_operations.o
CFILE = ft_stuff.c ft_operations.c main.c
HEADER = do_op.h

all: $(NAME)

ft_stuff.o:
		@gcc $(FLAGS) -c ft_stuff.c

ft_operations.o:
		@gcc $(FLAGS) -c ft_operations.c

$(NAME): ft_stuff.o ft_operations.o
		@gcc $(FLAGS) $(OBJS) main.c -o $(NAME)

clean:
		@/bin/rm -f $(OBJS)

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all
