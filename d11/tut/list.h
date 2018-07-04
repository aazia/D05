/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 15:43:16 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/03 15:46:46 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list t_list;

struct s_list
{
	char *str;
	t_list *next;
};

t_list 	*add_link(t_list *list, char *str);
void	print_list(t_list *list);

#endif
