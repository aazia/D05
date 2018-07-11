/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 14:48:26 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/10 15:03:15 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//write a program that takes two strings representing two strictly positive integers that fit in an int.
//display their heighest commmon denominator followed by a new line
//if the # of parameters is not 2 display a new line


void	pgcd(int n1, int n2)
{
	int div;
	int pgcd;

	div = 1;
	if (n1 <= 0 || n2 <= 0)
		return ;
	while (div <= n1 || div <= n2)
	{
		if (n1 % div == 0 && n2 % div == 0)
			pgcd = div;
		div++;
	}
	printf("%d", pgcd);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		pgcd(atoi(argv[1]), atoi(argv[2]))
	}
	ft_putchar('\n');
	return (0);
}

