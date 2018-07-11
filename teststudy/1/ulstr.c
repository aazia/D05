/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:42:49 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/10 16:53:52 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Write a program that takes a string and reverses the case of all its letters.
//Other characters remain unchanged.
//You must display the result followed by a '\n'.
//If the number of arguments is not 1, the program displays '\n'.

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ulstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z') 
		{
			ft_putchar(str[i] + 32);
			i++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			ft_putchar(str[i] - 32);
			i++;
		}
		else
			ft_putchar(str[i++]);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	ft_putchar('\n');
}
