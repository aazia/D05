/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 13:40:46 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/06 14:51:41 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Write a program that takes a string and displays it, replacing each of its
//letters by the letter 13 spaces ahead in alphabetical order.
//'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.
//The output will be followed by a newline.
//If the number of arguments is not 1, the program displays a newline.

#include <unistd.>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot13(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			ft_putchar(str[i] + 13);
		else if (
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rot13(argv[1]);
	ft_putchar('\n');
	return (0);
}
