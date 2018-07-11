/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 15:52:28 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/07 15:14:08 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void	ft_forwardline(int x, int y)
{
	int	bn;
	int counter;
	int	end;

	bn = x - 2;
	counter = 1;
	if (x < 0 || y < 0)
		end = 0;
	if (x >= 1 && y >= 1)
	{
		ft_putchar('A');
		if (x >= 3)
		{
			while (counter <= bn)
			{
				ft_putchar('B');
				counter++;
			}
		}
		if (x >= 2)
			ft_putchar('A');
		ft_putchar('\n');
	}
}

void	ft_print_bs(int x, int y)
{
	int	rows_left;
	int	col;

	rows_left = 2;
	if (x <= 0 || y <= 0)
		return ;
	while (y - rows_left > 0)
	{
		ft_putchar('B');
		col = 1;
		while (++col < x)
			ft_putchar(' ');
		rows_left++;
		if (col == x)
		{
			ft_putchar('B');
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
		ft_putchar('C');
		if (x >= 3)
		{
			while (counter <= bn)
			{
				ft_putchar('B');
				counter++;
			}
		}
		if (x >= 2)
			ft_putchar('C');
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
