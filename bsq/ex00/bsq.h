/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyang <doyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 23:01:21 by doyang            #+#    #+#             */
/*   Updated: 2018/07/10 20:38:25 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# define BUFF_SIZE 4

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
int		min(int a, int b, int c);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, const char *src);

#endif
