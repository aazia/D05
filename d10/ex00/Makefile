# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azkeever <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/02 10:36:43 by azkeever          #+#    #+#              #
#    Updated: 2018/07/02 11:31:43 by azkeever         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCE = srcs
HEADER_DIR = includes

all: $(NAME)

$(NAME): $(HEADER_DIR)
	gcc -c /$(SOURCE)/*.c

make_lib: $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

rl:
	ranlib libft.a

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

