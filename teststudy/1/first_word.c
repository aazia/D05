/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 13:01:20 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/06 13:12:30 by azkeever         ###   ########.fr       */
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

void	ulstr(char *str)
{
	while (*str != '\0')
	{
		if (*str++ >= 'a' || *str++ <= 'z')
			ft_putchar(*str - 32);
		else if (*str++ >= 'A' || *str++ <= 'Z')
			ft_putchar(*str + 32);
		ft_putchar('\n');
}

int		main(void)
{
	if (argc == 2)
		ulstr(argv[1]);
	ft_putchar('\n');
	return (0);
}
