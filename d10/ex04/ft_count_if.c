/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 11:57:42 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/02 16:44:12 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int j;
	int times;

	i = 0;
	j = 0;
	times = 0;
	while (tab[i][j] != 0 && tab[i][j])
	{
		j = 0;
		while (tab[i][j] != 0 && tab[i][j])
		{
			if (f(tab[i][j]) == 1)
				times++;
			j++;
		}
		i++;
	}
	return (times);
}
