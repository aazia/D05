/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 16:11:46 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/03 20:16:32 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_size(t_list *begin_list)
{
	t_list *list;
	int i;

	i = 0;
	list = begin_list;
	if (list)
	{
		while ((list)->next)
			i++;
	}
	return (i);
}
