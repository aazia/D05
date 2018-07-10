/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiroji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:43:55 by shiroji           #+#    #+#             */
/*   Updated: 2018/07/09 20:08:21 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#define x 10
#define y 7

void	print_sq(int m[x][y], int max_of_s, int max_i, int max_j)
{
	int		i;
	int		j;

	i = max_i;
	while (i-- > max_i - max_of_s)
	{
		j = max_j;
		while (j-- > max_j - max_of_s)
		{
			ft_putnbr(m[i][j]);
		}
		ft_putstr("\n");
	}
}

void	find_maxsq(int s[x][y], int m[x][y])
{
	int		max_of_s;
	int		max_i;
	int		max_j;
	int		i;
	int		j;

	i = 0;
	while (i++ < x)
	{
		j = 0;
		while (j++ < y)
		{
			if (max_of_s < s[i][j])
			{
				max_of_s = s[i][j];
				max_i = i;
				max_j = j;
			}
		}
	}
	print_sq(m, max_of_s, max_i, max_j);
}

void	mk_sumatrix(int m[x][y], int s[x][y])
{
	int		i;
	int		j;

	i = 1;
	while (i++ < x)
	{
		j = 1;
		while (j++ < y)
		{
			if (m[i][j] == 1)
				s[i][j] = min(s[i][j - 1], s[i - 1][j], s[i - 1][j - 1]) + 1;
			else
				s[i][j] = 0;
		}
	}
	find_maxsq(s, m);
}

void	mk_matrixcpy(int m[x][y])
{
	int		i;
	int		j;
	int		s[x][y];
	
	i = 0;
	j = 0;
	while (i++ < x)
		s[i][0] = m[i][0];

	while (j++ < y)
		s[0][j] = m[0][j];
	mk_sumatrix(m, s);
}

int main(void)
{
  int  m[x][y] =   {{1, 1, 1, 1, 1, 1, 1},
           		        {1, 0, 1, 1, 1, 1, 1},
                   		{1, 1, 1, 1, 1, 1, 1},
           		        {1, 1, 1, 1, 1, 1, 1},
           		        {1, 1, 1, 1, 1, 1, 1},
           		        {1, 0, 1, 1, 1, 1, 1},
 		 			    {1, 1, 1, 1, 1, 0, 1},
  				   		{1, 1, 1, 1, 1, 1, 1},
  				   		{1, 1, 0, 1, 1, 0, 1},
  				   		{1, 0, 1, 0, 1, 1, 1}};

  (mk_matrixcpy(m));
  /* getchar(); */
 return (0);
}

/*
int		main(int argc, char **argv)
{
	int **matrix;

	matrix = NULL;
	if (argc >= 2 && is_valid(argv[1]))
	{
		matrix = make_matrix(argv[1]);
		print_matrix(matrix);
	}
	else
		write(2, "map error\n", 10);
	return (0); 
}*/
