/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 11:52:35 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/02 16:29:33 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int *array;
	int i;
	
	i = 0;
	array = (int *)malloc(sizeof(int) * (length));
	while (i < length))
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}
