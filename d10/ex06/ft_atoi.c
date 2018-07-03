/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 14:09:40 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/02 15:53:38 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int sign;
	int res;
	int counter;

	res = 0;
	counter = 0;
	sign = 1;
	while (str[counter] != '\0')
	{
		if (str[counter] - '0' >= 0 && str[counter] - '0' <= 9)
		{
			if (res == 0 && str[counter - 1] == '-')
			{
				sign = -1;
			}
			res = res * 10 + str[counter] - '0';
		}
		else if (res > 0)
		{
			return (sign * res);
		}
		counter++;
	}
	return (sign * res);
}
