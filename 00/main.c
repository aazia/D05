/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:43:55 by shiroji           #+#    #+#             */
/*   Updated: 2018/07/11 23:40:17 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "bsq.h"

int		**make_s(int x, int y)
{
	int i;
	int z;
	int **s;

	i = 0;
	s = (int **)malloc(sizeof(int *) * (y));
	while (i < y)
	{
		z = 0;
		s[i] = (int *)malloc(sizeof(int) * x);
		while (z < y)
			s[i][z++] = 0;
		i++;
	}
	return (s);
}

int		**find_max(int **s, int **m, int x, int y)
{   
  	int max_of_s;
	int max_i;
	int max_j; 
	int j;
	int i;

  /* Find the maximum entry, and indexes of maximum entry 
     in S[][] */
	max_of_s = s[0][0]; max_i = 0; max_j = 0;
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (max_of_s < s[i][j])
			{
				max_of_s = s[i][j];
				max_i = i;
				max_j = j;
			}
			j++;
		}
		i++;
	}
	i = max_i - max_of_s + 1;
	while (i <= max_i)
	{
		j = max_j - max_of_s + 1;
		while (j <= max_j)
			m[i][j++] = 2;
		i++;
	}
	return(m);
}

int		**find_square(int **m, int x, int y)
{
	int i;
	int j;
  	int **s;

	s = make_s(x, y);
  /* Set first column of S[][]*/
	i = -1;
	while (++i < y)
		s[i][0] = m[i][0];
  /* Set first row of S[][]*/
	j = -1;
	while (++j < x - 10)
	{
		s[0][j] = m[0][j];
	}
  /* Construct other entries of S[][]*/
	i = 1;
	while (i++ < y - 1)
	{
		j = 1;
		while (j++ < x)
		{
			if (m[i][j] == 1)
				s[i][j] = min(s[i][j - 1], s[i - 1][j], s[i - 1][j - 1]) + 1;
			else
				s[i][j] = 0;
		}
	}
	return(find_max(s, m, x, y));
}

void	print_map(char *info, int **m, int x, int y)
{
	int i;
	int j;
	int len;

	i = 0;
	len = ft_strlen(info);
	while (i < y)
	{
		j = 0;
      	while (j < x - 1)
		{
			if (m[i][j] == 0)
				ft_putchar(info[len - 2]);
			if (m[i][j] == 1)
				ft_putchar(info[len - 3]);
			if (m[i][j] == 2)
				ft_putchar(info[len - 1]);
        	j++;
		}
      	ft_putchar('\n');
      	i++;
  	}
  	ft_putchar('\n');
}
