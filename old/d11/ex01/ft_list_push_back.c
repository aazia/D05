/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 16:11:46 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/03 20:10:10 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	list = *begin_list;
	if (! list)
		*begin_list = ft_create_elem(data);
	else
	{	
		while ((list)->next)
			list = list->next;
		list->next = ft_create_elem(data);
	}
}
