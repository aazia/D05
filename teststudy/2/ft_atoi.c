/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 17:04:37 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/10 18:16:43 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int		ft_atoi(const char *str)
{
	int n;
	int sign;
	int i;

	sign = 1;
	n = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 15))
	{	
		i++;
	}
	if ((str[i + 1] >= '1' && str[i + 1] <= '9') && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	else if (!(str[i] >= '1' && str[i] <= '9'))
		i++;
	while (str[i] >= '1' && str[i] <= '9')
	{
		n = n * 10;
		n = n + (str[i++] - '0');
	}
	return (n * sign);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_putnbr(ft_atoi(argv[1]));
		ft_putchar('\n');
		printf("%i", ft_atoi(argv[1]));
	return (0);
}
