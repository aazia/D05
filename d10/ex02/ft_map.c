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
	while (tab[i])
		i++;
	array = (int *)malloc(sizeof(int) * (i));
	while (tab[i])
	{
		array[i] = f(i);
		i++;
	}
	return (array);
}
