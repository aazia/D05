/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 13:26:21 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/06 13:39:13 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Write a program that takes a string, and displays the string in reverse
//followed by a newline.
//If the number of parameters is not 1, the program displays a newline.

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	rev_print(char *str, int strlen)
{
	while (strlen-- > 0)
		ft_putchar(str[strlen]);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rev_print(argv[1], ft_strlen(argv[1]));
	ft_putchar('\n');
	return (0);
}
