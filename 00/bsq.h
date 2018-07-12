/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <azkeever@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 00:17:55 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/11 21:57:24 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# define BUFF_SIZE 4096

void	errr(void);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
int		min(int a, int b, int c);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, const char *src);
int		**find_square(int **m, int x, int y);
int		**find_max(int **s, int **m, int x, int y);
void	print_map(char *info, int **m, int x, int y);

#endif
