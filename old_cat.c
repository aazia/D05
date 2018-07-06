/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   old_cat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 17:47:08 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/05 18:15:52 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

void   ft_putchar(char c)
{
  write(1, &c, 1);
}

void  ft_putstr(char *str)
{
  while(*str)
    ft_putchar(*str++);
}

int   main(int argc, char **argv)
{
  int	file;
  int	i;
  char	array[1];

  i = 0;
  while (i < argc)
  {
    if (argc == 1 || argv[i][0] == '-')
      file = 0;
    else
      file = open(argv[i], O_RDONLY);
    if (file == -1)
		    {
		      ft_putstr("cat: ");
		      ft_putstr(argv[1]);
		      ft_putstr(": No such file or directory\n");
		    }
		  else
		    {
		  while (read(file, array, 1) > 0)
			  ft_putchar(array[0]);
		  close(file);
		  ft_putchar('\n');
		    }
	  i++;			
  }
  return (0);
}
