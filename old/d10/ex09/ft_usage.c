/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 23:02:03 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/02 23:17:32 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void 	*ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(str++);
}

void *ft_usage(int n1, int n2, char c)
{
	if (c != '+' || c != '-' || c != '*' || c != '/' || c != '%')
		ft_putstr("error : only [ + - * / % ] are accepted.");
	if (n2 == 0)
	{
		if (c == '/')
			ft_putstr("Stop : division by zero");
		if (c == '%')
			ft_putstr("Stop : modulo by zero");
	}
}
