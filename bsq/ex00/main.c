/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiroji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:43:55 by shiroji           #+#    #+#             */
/*   Updated: 2018/07/10 19:42:15 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#define R 10
#define C 7
 
void printMaxSubSquare(int M[R][C])
{
  int i,j;
  int S[R][C];
  int max_of_s, max_i, max_j; 
 
  /* Set first column of S[][]*/
  for(i = 0; i < R; i++)
     S[i][0] = M[i][0];

  /* Set first row of S[][]*/    
  for(j = 0; j < C; j++)
     S[0][j] = M[0][j];

  /* Construct other entries of S[][]*/
  for(i = 1; i < R; i++)
  {
    for(j = 1; j < C; j++)
    {
      if(M[i][j] == 1) 
        S[i][j] = min(S[i][j-1], S[i-1][j], S[i-1][j-1]) + 1;
      else
        S[i][j] = 0;
    } 
  } 
   
  /* Find the maximum entry, and indexes of maximum entry 
     in S[][] */
  max_of_s = S[0][0]; max_i = 0; max_j = 0;
  for(i = 0; i < R; i++)
  {
    for(j = 0; j < C; j++)
    {
      if(max_of_s < S[i][j])
      {
         max_of_s = S[i][j];
         max_i = i; 
         max_j = j;
      }        
    }                 
  }     
   
  ft_putstr("Maximum size sub-matrix is: \n");
  for(i = max_i; i > max_i - max_of_s; i--)
  {
    for(j = max_j; j > max_j - max_of_s; j--)
    {
      ft_putnbr(M[i][j]);
    }  
    ft_putstr("\n");
  }  
}
 
/* Driver function to test above functions */
int main(void)
{
  int  M[R][C] =   {{1, 1, 1, 1, 1, 1, 1}, 
           		        {1, 0, 1, 1, 1, 1, 1}, 
                   		{1, 1, 1, 1, 1, 1, 1},
           		        {1, 1, 1, 1, 1, 1, 1},
           		        {1, 1, 1, 1, 1, 1, 1},
           		        {1, 0, 1, 1, 1, 1, 1},
 		 			    {1, 1, 1, 1, 1, 0, 1},
  				   		{1, 1, 1, 1, 1, 1, 1},
  				   		{1, 1, 0, 1, 1, 0, 1},
  				   		{1, 0, 1, 0, 1, 1, 1}};
                
  printMaxSubSquare(M);
 return (0); 
}  
