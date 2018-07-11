/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:19:21 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/10 15:43:21 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Write a program that takes a string and displays its last word followed by a \n.
//A word is a section of string delimited by spaces/tabs or by the start/end of
//the string.
//If the number of parameters is not 1, or there are no words, display a newline.
#include <unistd.h>

void	last_word(char *str)
{
	int j;
	int i;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 127)
			j = i + 1;
		i++;
	}
	while (str[j] >= 33 && str[j] <= 127)
	{
		write(1, &str[j], 1);
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
