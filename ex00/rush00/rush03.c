/**************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   azia.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 11:37:03 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/07 14:44:44 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* the first line */
#include <stdlib.h>

void	ft_putchar(char c);

void	ft_forwardline(int x, int y)
{
	int		Bn;
	int 	counter;
	int		end;

	Bn = x - 2;
	counter = 1;
	
	if (x < 0 ||  y < 0)
	{	
		end = 0;
	}

	if (x >=  1 && y >=  1)
	{
		ft_putchar('A');
		if (x >= 3)
		{
			while (counter <= Bn)
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

/* the B's */

void    ft_print_bs(int x, int y)
{
    int        rows_left;
    int        col_position;
    
    rows_left = 2;
    if (x <= 0 || y <= 0)
      return ;
    while( y - rows_left > 0)
    {
        ft_putchar('B');

        col_position = 1;
        while (++col_position < x)
        {
            ft_putchar(' ');
        }
        rows_left++;
        if (col_position == x)
        {
            ft_putchar('B');
        }
        ft_putchar('\n');
    }

}

/* Second Line */
void	ft_secondline(int x, int y)
{
	int		Bn;
	int 	counter;
	int		end;

	Bn = x - 2;
	counter = 1;
		
	if (x < 0 ||  y < 2)
	{	
		end = 0;
	}
	else if (x >=  1 && y >=  1)
	{
		ft_putchar('A');
		if (x >= 3)
		{
			while (counter <= Bn)
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

/* Rush function */

void		rush(int x, int y)
{
	ft_forwardline(x , y);
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
