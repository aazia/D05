/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiroji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:43:55 by shiroji           #+#    #+#             */
/*   Updated: 2018/07/11 19:43:59 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "bsq.h"
 
void find_square(int **m, int x, int y)
{
  int i,j;
  int s[y][x];
  int max_of_s, max_i, max_j; 

  i = -1;
  while(++i < y)
  {
	  j = -1;
	  while (++j < x)
		  printf("%d", m[i][j]);
	  printf("\n");
  } 
  /* Set first column of S[][]*/
  for(i = 0; i < y; i++)
     s[i][0] = m[i][0];

  /* Set first row of S[][]*/    
  for(j = 0; j < x; j++)
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
   
  ft_putstr("Maximum size sub-matrix is: \n");
  printf("%i, %i, %i\n", max_i, max_j, max_of_s);
	for(i = max_i; i > max_i - max_of_s; i--)
  {
   for(j = max_j; j > max_j - max_of_s; j--)
    {
      ft_putnbr(m[i][j]);
    }  
    ft_putstr("\n");
  }  
}
