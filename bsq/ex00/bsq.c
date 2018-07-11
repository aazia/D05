/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 13:36:34 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/11 02:40:49 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

void	quik(char **m)
{
	int i;
	int j;

	i = 0;
	while (m[i])
	{
		j = 0;
		while (m[i][j])
		{
			ft_putchar(m[i][j++]);
		}
		ft_putchar('\n');
		i++;
	}
}

/* realloc memory for a str */
char 	*ft_realloc(char *ref)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(ref) + (BUFF_SIZE) + 1);
	if (new == NULL)
			return (NULL);
	while (i < (ft_strlen(ref) + (BUFF_SIZE) + 1))
		new[i++] = 0;
	new = ft_strcpy(new, ref);
	return (new);
}

/* turns **matrix into sum matrix */
int		**make_sumatrix(char *info, char **matrix, int x, int y)
{
	int i;
	int j;
	int	**s;

	quik(matrix);
	ft_putchar('\n');
	i = 0;
	s = (int **)malloc(sizeof(int *) * (y + 1));
	while (i < y)
	{
		j = 0;
		s[i] = (int *)malloc(sizeof(int) * (x + 1));
		while (j < x - 1)
		{
			if (matrix[i][j] == info[ft_strlen(info) - 2])
				s[i][j++] = 0;
			else if (matrix[i][j] == info[ft_strlen(info) - 3])
				s[i][j++] = 1;
			else
				errr();
		}
		i++;
	}
	find_square(s, --x, y);
	return (s);
}

/* turn *str matrix into **str matrix */
char **make_matrix(char *info, char *map, int x, int y)
{
	char **matrix;
	char array[1];
	int i;
	int j;
	int file;

	i = 0;
	j = 0;
	matrix = (char **)malloc(sizeof(char *) * (y + 1));
	file = open(map, O_RDONLY);
	while (read(file, array, 1) > 0 && array[0] != '\n')
	  ;
	while (read(file, array, 1) > 0)
	{
		matrix[i] = (char *)malloc(sizeof(char) * x);
		if (array[0] == '\n')
		{
			matrix[i++][j] = 0;
			j = 0;
		}
		else
		{
			matrix[i][j++] = array[0];
			ft_putchar(matrix[i][j - 1]);
		}
	}
  while (matrix[i])
  {
    j = 0;
    while (matrix[i][j])
    {
      ft_putchar(matrix[i][j++]);
    }
    i++;
  }
  close(file);
  matrix[i] = NULL;
	quik(matrix);
	make_sumatrix(info, matrix, x, y);
	return (matrix);
}

/* get's the info 2 read the map */
char	**get_info(char *map)
{
	char	array[1];
	int		file;
	int 	i;
	char	*info;
	int		x;
	int		y;

	x = 0;
	i = 0;
	info = (char *)malloc(sizeof(char) * (BUFF_SIZE) + 1);
	file = open(map, O_RDONLY);
	while (read(file, array, 1 > 0) && array[0] != '\n')
	{
		info[i] = array[0];
		i++;
		if (i % BUFF_SIZE == 0)
			info = ft_realloc(info);
	}
	info[i] = 0;
	i = 0;
	while (read(file, array, 1) > 0)
		i++;
	close(file);
	y = ft_atoi(info);
	x = i / y;
	return (make_matrix(info, map, x, y));
}

/* driver function to test */
int		main(int argc, char **argv)
{
	char	**matrix;

	if (argc == 2)
	{
		matrix = get_info(argv[1]);		
	}
	else
		errr();
	return  (0);
}
