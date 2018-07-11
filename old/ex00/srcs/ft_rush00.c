/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyang <doyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 23:01:16 by doyang            #+#    #+#             */
/*   Updated: 2018/07/08 00:07:38 by doyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush00(char *str, int x, int y)
{
	int xx;
	int yy;

	yy = 0;
	while (yy++ < y)
	{
		xx = 0;
		while (xx++ < x)
		{
			if ((xx == 1 && yy == 1) || (xx == x && yy == 1) ||
				(xx == 1 && yy == y) || (xx == x && yy == y))
				*str = 'o';
			else if (xx == 1 || xx == x)
				*str = '|';
			else if (yy == 1 || yy == y)
				*str = '-';
			else
				*str = ' ';
			str++;
		}
		if (x > 0)
			*str = '\n';
		str++;
	}
	*str = '\0';
}

void	rush01(char *str, int x, int y)
{
	int xx;
	int yy;

	yy = 0;
	while (yy++ < y)
	{
		xx = 0;
		while (xx++ < x)
		{
			if ((xx == 1 && yy == 1) || (xx == x && yy == y
				&& y != 1 && x != 1))
				*str = '/';
			else if ((xx == 1 && yy == y) || (xx == x && yy == 1))
				*str = '\\';
			else if ((xx == 1 || xx == x) || (yy == 1 || yy == y))
				*str = '*';
			else
				*str = ' ';
			str++;
		}
		if (x > 0)
			*str = '\n';
		str++;
	}
	*str = '\0';
}

void	rush02(char *str, int x, int y)
{
	int xx;
	int yy;

	yy = 0;
	while (yy++ < y)
	{
		xx = 0;
		while (xx++ < x)
		{
			if ((xx == 1 && yy == 1) || (xx == x && yy == 1))
				*str = 'A';
			else if ((xx == 1 && yy == y) || (xx == x && yy == y))
				*str = 'C';
			else if ((xx == 1 || xx == x) || (yy == 1 || yy == y))
				*str = 'B';
			else
				*str = ' ';
			str++;
		}
		if (x > 0)
			*str = '\n';
		str++;
	}
	*str = '\0';
}

void	rush03(char *str, int x, int y)
{
	int xx;
	int yy;

	yy = 0;
	while (yy++ < y)
	{
		xx = 0;
		while (xx++ < x)
		{
			if ((xx == 1 && yy == 1) || (xx == 1 && yy == y))
				*str = 'A';
			else if ((xx == x && yy == 1) || (xx == x && yy == y))
				*str = 'C';
			else if ((xx == 1 || xx == x) || (yy == 1 || yy == y))
				*str = 'B';
			else
				*str = ' ';
			str++;
		}
		if (x > 0)
			*str = '\n';
		str++;
	}
	*str = '\0';
}

void	rush04(char *str, int x, int y)
{
	int xx;
	int yy;

	yy = 0;
	while (yy++ < y)
	{
		xx = 0;
		while (xx++ < x)
		{
			if ((xx == 1 && yy == 1) || (xx == x && yy == y && y != 1
				&& x != 1))
				*str = 'A';
			else if ((xx == 1 && yy == y) || (xx == x && yy == 1))
				*str = 'C';
			else if ((xx == 1 || xx == x) || (yy == 1 || yy == y))
				*str = 'B';
			else
				*str = ' ';
			str++;
		}
		if (x > 0)
			*str = '\n';
		str++;
	}
	*str = '\0';
}
