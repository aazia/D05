/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyang <doyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 23:01:21 by doyang            #+#    #+#             */
/*   Updated: 2018/07/07 23:02:27 by doyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

# define BUFF_SIZE 4096

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	rush00(char *str, int x, int y);
void	rush01(char *str, int x, int y);
void	rush02(char *str, int x, int y);
void	rush03(char *str, int x, int y);
void	rush04(char *str, int x, int y);
void	ft_find_index(int x, int y, char *ref, int *count_index);
void	ft_print(int x, int y, int *count_index);
int		compare_rushtype(int x, int y, int i, char *ref);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);

#endif
