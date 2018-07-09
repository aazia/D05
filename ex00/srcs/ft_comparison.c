/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comparison.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyang <doyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 18:34:31 by doyang            #+#    #+#             */
/*   Updated: 2018/07/08 18:35:24 by doyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		compare_rushtype(int x, int y, int i, char *ref)
{
	char *tocomp;

	tocomp = malloc(sizeof(char) * (x * y + 1));
	if (i == 1)
		rush00(tocomp, x, y);
	if (i == 2)
		rush01(tocomp, x, y);
	if (i == 3)
		rush02(tocomp, x, y);
	if (i == 4)
		rush03(tocomp, x, y);
	if (i == 5)
		rush04(tocomp, x, y);
	if (ft_strcmp(ref, tocomp) == 0)
	{
		free(tocomp);
		return (i);
	}
	free(tocomp);
	return (-1);
}

void	ft_find_index(int x, int y, char *ref, int *count_index)
{
	int		i;
	int		result;

	i = 1;
	while (i <= 5)
	{
		result = compare_rushtype(x, y, i, ref);
		if (result != -1)
		{
			*count_index = i;
			count_index++;
		}
		i++;
	}
	*count_index = 0;
}

void	ft_print(int x, int y, int *count_index)
{
	int i;
	int p;

	i = 0;
	if (!*count_index)
		ft_putstr("Invalid Input(s).");
	while (*count_index)
	{
		p = *count_index;
		if (i != 0)
			ft_putstr(" || ");
		ft_putstr("[rush-0");
		ft_putnbr(p - 1);
		ft_putstr("] [");
		ft_putnbr(x);
		ft_putstr("] [");
		ft_putnbr(y);
		ft_putstr("]");
		i++;
		count_index++;
	}
}
