/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 15:13:51 by azkeever          #+#    #+#             */
/*   Updated: 2018/06/22 15:20:48 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hello_world(void)
{
	write(1, "hello world\n", 12);
}

int		main(void)
{
	hello_world();
	return (0);
}
