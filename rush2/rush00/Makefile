# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azkeever <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/07 14:46:12 by azkeever          #+#    #+#              #
#    Updated: 2018/07/08 15:23:55 by azkeever         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

0 = rush00.c
1 = rush01.c
2 = rush02.c
3 = rush03.c
4 = rush04.c

SOURCE = ft_putchar.c

all: compile

compile:
	gcc $(HEADER) -c $(SOURCE)
	gcc -Wall -Werror -Wextra -o rush-00 $(0) $(SOURCE)
	gcc -Wall -Werror -Wextra -o rush-01 $(1) $(SOURCE)
	gcc -Wall -Werror -Wextra -o rush-02 $(2) $(SOURCE)
	gcc -Wall -Werror -Wextra -o rush-03 $(3) $(SOURCE)
	gcc -Wall -Werror -Wextra -o rush-04 $(4) $(SOURCE)

clean:
	rm -f *~ *.swp

fclean: clean
	rm -f *rush-

re: fclean all
