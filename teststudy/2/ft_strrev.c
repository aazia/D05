/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:07:26 by azkeever          #+#    #+#             */
/*   Updated: 2018/06/22 17:00:18 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char		*ft_strrev(char *str)
{
	int		i;
	int		l;
	char	t;

	l = 0;
	while (str[l] != '\0')
		l++;
	i = -1;
	while (i < l)
	{
		t = str[i];
		str[i] = str[l];
		str[l] = t;
		i++;
		l--;
	}
	return (str);
}

int			main(void)
{

	ft_strrev("dH");

	return (0);
}
