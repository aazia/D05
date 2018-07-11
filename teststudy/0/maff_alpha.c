/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 15:48:19 by azkeever          #+#    #+#             */
/*   Updated: 2018/06/22 16:04:40 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			main(void)
{
	char	lower;
	char	upper;
	int		counter;

	lower = 'a';
	upper = 'B';
	counter = 0;
	while (counter <= 12)
	{
		write(1, &lower, 1);
		write(1, &upper, 1);
		lower = lower + 2;
		upper = upper + 2;
		counter++;
	}
	write(1, "\n", 1);
	return (0);
}
