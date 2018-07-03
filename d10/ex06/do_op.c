/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 12:43:51 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/02 23:46:55 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_val(char *list);
int		o_val(char *list);
int		ft_atoi(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(214748364);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
}

int		operator(int n1, char *o, int n2)
{
	if (*o == '+')
		return (n1 + n2);
	if (*o == '-')
		return (n1 - n2);
	if (*o == '*')
		return (n1 * n2);
	if (*o == '/')
		return (n1 / n2);
	if (*o == '%')
		return (n1 % n2);
	return (0);
}

int		main(int argc, char **argv)
{
	int n1;
	int n2;

	n1 = 0;
	n2 = 0;
	if (argc == 4)
	{
		if (is_val(argv[1]) && is_val(argv[3]) && o_val(argv[2]))
		{
			n1 = ft_atoi(argv[1]);
			n2 = ft_atoi(argv[3]);
			ft_putnbr(operator(n1, argv[2], n2));
			return (operator(n1, argv[2], n2));
		}
		else
			return (0);
	}
	else
		return (0);
}
