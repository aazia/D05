/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 13:36:34 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/09 18:42:36 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int argc, char **argv)
{
	char	array[1];
	int		file;
	int		y;
	char	empty;
	char	ob;
	char	ful;

	empty = '!';
	ob = '!';
	ful = '!';
	y = 0;
	if (argc == 2)
	{
		file = open(argv[1], 0);
		while (read(file, array, 1) > 0)
		{
			while (array[0] != '\n' && ful == '!')
			{
				ft_putstr("hello\n");
				if (y == 0)
				{
					y = ft_atoi(array);
					ft_putnbr(y);
					ft_putstr("\nthat was y\n");
				}
				if (empty == '!' && y != '!')
					empty = array[0];
				if (ob == '!' && y != '!' && empty != '!')
					ob = array[0];
				if (ful == '!' && y != '!' && empty != '!' && ob != '!')
					ful = array[0];
			}
			ft_putchar(array[0]);
		}
		close(file);
		ft_putstr("end\n");
		ft_putchar(empty);
		ft_putchar('\n');
		ft_putchar(ob);
		ft_putchar('\n');
		ft_putchar(ful);
		ft_putchar('\n');
		ft_putnbr(y);
		ft_putchar('\n');
	}
	else
		write(2, "map error\n", 10);
	return (0);
}
