/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiroji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:43:55 by shiroji           #+#    #+#             */
/*   Updated: 2018/07/11 21:42:56 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "bsq.h"
 
void find_square(int **m, int x, int y)
{
	int i;
	int j;
  	int s[y][x];

  /* Set first column of S[][]*/
	i = -1;
	while (++i < y)
		s[i][0] = m[i][0];

  /* Set first row of S[][]*/
	j = -1;
	while (++j < x)
		s[0][j] = m[0][j];

  /* Construct other entries of S[][]*/
  for(i = 1; i < y; i++)
  {
    for(j = 1; j < x; j++)
    {
      if(m[i][j] == 1) 
        s[i][j] = min(s[i][j-1], s[i-1][j], s[i-1][j-1]) + 1;
      else
        s[i][j] = 0;
    } 
  }
  find_max(s, m, i, j);
}
void find_max(int s[][], int **m, int i, int j)
{   
  	int max_of_s;
	int max_i;
	int max_j; 

  /* Find the maximum entry, and indexes of maximum entry 
     in S[][] */
  max_of_s = s[0][0]; max_i = 0; max_j = 0;
  for(i = 0; i < y; i++)
  {
    for(j = 0; j < x; j++)
    {
      if(max_of_s < s[i][j])
      {
         max_of_s = s[i][j];
         max_i = i; 
         max_j = j;
      }        
    }                 
  }     
  i = max_i - max_of_s + 1;
  while (i <= max_i)
  {
      j = max_j - max_of_s + 1;
      while (j <= max_j)
          m[i][j++] = 2;
      i++;
  }
}
  i = 0;
  while (i < y)
  {
      j = 0;
      while (j < x)
        ft_putnbr(m[i][j++]);
      ft_putchar('\n');
      i++;
  }
  ft_putchar('\n');
}
