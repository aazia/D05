/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyang <doyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 13:36:34 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/08 00:11:07 by doyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		count_x(char *ref)
{
	int	x;

	x = 0;
	while (ref[x] != '\n' && ref[x] != '\0')
	{
		x++;
	}
	return (x);
}

int		count_y(char *ref)
{
	int	y;

	y = 0;
	while (*ref)
	{
		if (*ref == '\n')
			y++;
		ref++;
	}
	return (y);
}

void	get_output(char *ref)
{
	char	array[1];
	int		i;

	i = 0;
	while (read(0, array, 1) > 0)
	{
		ref[i] = array[0];
		i++;
	}
	ref[i] = 0;
}

int		main(int argc, char **argv)
{
	char	*ref;
	int		*count_index;
	int		x;
	int		y;

	ref = malloc(BUFF_SIZE + 1);
	count_index = malloc(BUFF_SIZE + 1);
	if (argc == 1 && argv[0] != 0)
	{
		get_output(ref);
		x = count_x(ref);
		y = count_y(ref);
		ft_find_index(x, y, ref, count_index);
		ft_print(x, y, count_index);
	}
	else
		ft_putstr("Invalid argument(s).");
	ft_putchar('\n');
	free(ref);
	free(count_index);
	return (0);
}
