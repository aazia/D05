/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 04:23:53 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/06 12:37:14 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Write a program that takes a string, and dispays the first 'a' character it encounters in it, followed by a newline. If there are no 'a' characters in the string, the program just writes a newline. If the nmber of parameters is not 1, the program displays 'a' followed by a newline. 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_aff_a(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_aff_a(argv[1]);
	else
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	return (0);
}
