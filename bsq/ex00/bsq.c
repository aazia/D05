/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 13:36:34 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/10 23:02:36 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "bsq.h"

/* realloc memory for a str */
char 	*ft_realloc(char *ref)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(ref) + (BUFF_SIZE) + 1);
	if (new == NULL)
	{
			return (NULL);
	}
	while (i < (ft_strlen(ref) + (BUFF_SIZE) + 1))
		new[i++] = 0;
	new = ft_strcpy(new, ref);
	return (new);
}

/* turn *str matrix into **str matrix */
char **make_matrix(char *info, int size, char *map)
{
	char **matrix;
	int i;
	int j;
	int file;

	i = 0;
	j = 0;
	matrix = (char **)malloc(sizeof(char) * size + 1) 
	file = open(map, 0);
	while (read(file, array, 1) > 0 && array[0] != '\n')
	{
		i++;
	}
	while (read(file, array, 1) > 0)
	{
		matrix[i][j] = array[0];
		if (array[0] == '\n')
		{
			j++;
			i = 0;
		}
		i++;
	}
	return (matrix);
}

/* get's the info 2 read the map */
char	**get_info(char *map)
{
	char	array[1];
	int		file;
	int 	i;
	char	*info;

	i = 0;
	info = (char *)malloc(sizeof(char) * (BUFF_SIZE) + 1);
	file = open(map, 0);
	while (read(file, array, 1 > 0) && array[0] != '\n')
	{
		info[i] = array[0];
		i++;
		if (i % 4 == 0)
			info = ft_realloc(info);
	}
	i = 0;
	while (read(file, array, 1) > 0)
	{
		i++;
	}
	close(file);
	return (make_matrix(info, i, map));
}

/* turns **matrix into sum matrix */
int		**make_sumatrix(info, matrix, i)
{
	int i;
	int j;
	int	**s;

	y = ft_atoi(info);
	x = i / y;
	i = 0;
	s = (int **)malloc(sizeof(int) * (x * y) + 1);
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			if (matrix[i][j] == info[2])
				s[i][j] = 1;
			else
				s[i][j] = 0;
			j++;
		}
		i++;
	}
	return (s);
}

/* driver function to test */
int		main(int argc, char **argv)
{
	if (argc == 2 & is_valid(argv[1]))
	{
		get_info(argv[1]);
		make_matrix();
	}
	else
		write(1, "map error\n", 10);
	return  (0);
}


