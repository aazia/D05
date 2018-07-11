/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:57:37 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/10 16:03:52 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char	*str;
	int		len;
	
	len = 0;
	while (src[len])
		++len;
	if ((str = (char *)malloc(sizeof(char) * (len + 1))))
		while (len >= 0)
		{
			str[len] = src[len];
			len--;
		}
	else
		return (NULL);
	return(str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s", ft_strdup(argv[1]));
	return (0);
}
