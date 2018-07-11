/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 16:08:34 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/02 22:58:40 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_sort_wordtab(char **tab)
{
	int 	i;
	int 	j;
	char 	*temp;

	temp = "char";
	i = 0;
	j = 0;
	while (tab[i][j] != '\0' && tab[i][j])
	{
		j = 0;
		while (tab[i][j] != '\0' && tab[i][j])
		{
			if (tab[i][j] > tab[i][j + 1])
			{
				*temp = tab[i][j];
				tab[i][j] = tab[i][j + 1];
				tab[i][j + 1] = *temp;
			}
			j++;
		}
		i++;
	}
	printf("%s", tab);
}

int 	main(void)
{
	int **c;
	

	ft_sort_wordtab(c);
	return (0);
}
