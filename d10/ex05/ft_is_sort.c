/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 12:10:49 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/02 17:28:01 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	if (length < 2)
		return (1);
	while (length >= 1)
		if (f(tab[length], tab[length++]) != f(tab[length], tab[length--]))
			return (0);
	return (1);
}



// old
	else 
		return (0);
	if (length > 2) //if length is less than or equal to two return sorted
	{
		while (tab[i] != 0 && tab[i] && i < length)
			if (f(tab[i], tab[i++]) == 
	}
	return (1);
}
