#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: neddison <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/03 21:48:52 by neddison          #+#    #+#              #
#    Updated: 2019/04/03 21:49:24 by neddison         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c

PROGRAM = ft_display_file

HEADER = ./includes/

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror -I $(HEADER) $(SRC)
	ar rc $(NAME) ft_putchar.o ft_putstr.o
	gcc -o $(PROGRAM) ./srcs/ft_display_file.c -L. -lft

clean:
	/bin/rm -f ft_putchar.o ft_putstr.o

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f $(PROGRAM)

re: fclean all

