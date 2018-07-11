# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: doyang <doyang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/07 17:27:41 by azkeever          #+#    #+#              #
#    Updated: 2018/07/08 16:25:00 by azkeever         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
SOURCE = srcs/ft_util.c srcs/ft_rush00.c srcs/ft_comparison.c srcs/rush02.c
HEADER = -I ./includes

all: $(NAME)

$(NAME):
	gcc $(HEADER) -o $(NAME) $(SOURCE)

clean:
	rm -f *.swp *~ rush-0*

fclean: clean
	rm -f $(NAME)

re: fclean all
