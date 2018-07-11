/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 13:48:36 by azkeever          #+#    #+#             */
/*   Updated: 2018/06/22 14:40:42 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}


void	ft_print_numbers(void)
{
	char c;

	c = '0';
	
	while (c <= '9') 
	{
		ft_putchar(c);
		c++;
	}
}

int		main(void)
{
	ft_print_numbers();
	ft_putchar('\n');
	return (0);
}
