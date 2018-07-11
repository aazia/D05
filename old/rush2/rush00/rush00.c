/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 15:32:48 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/07 14:43:01 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void	ft_forwardline(int x, int y)
{
	int	bn;
	int	counter;
	int	end;

	bn = x - 2;
	counter = 1;
	if (x < 0 || y < 0)
		end = 0;
	if (x >= 1 && y >= 1)
	{
		ft_putchar('o');
		if (x >= 3)
		{
			while (counter <= bn)
			{
				ft_putchar('-');
				counter++;
			}
		}
		if (x >= 2)
			ft_putchar('o');
		ft_putchar('\n');
	}
}

void	ft_print_bs(int x, int y)
{
	int	rows_left;
	int	col_position;

	rows_left = 2;
	if (x <= 0 || y <= 0)
		return ;
	while (y - rows_left > 0)
	{
		ft_putchar('|');
		col_position = 1;
		while (++col_position < x)
		{
			ft_putchar(' ');
		}
		rows_left++;
		if (col_position == x)
		{
			ft_putchar('|');
		}
		ft_putchar('\n');
	}
}

void	ft_secondline(int x, int y)
{
	int	bn;
	int counter;
	int	end;

	bn = x - 2;
	counter = 1;
	if (x < 0 || y < 2)
		end = 0;
	else if (x >= 1 && y >= 1)
	{
		ft_putchar('o');
		if (x >= 3)
		{
			while (counter <= bn)
			{
				ft_putchar('-');
				counter++;
			}
		}
		if (x >= 2)
			ft_putchar('o');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	ft_forwardline(x, y);
	ft_print_bs(x, y);
	ft_secondline(x, y);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		rush(atoi(argv[1]), atoi(argv[2]));
	else 
		ft_putchar('X');
	return (0);
}
