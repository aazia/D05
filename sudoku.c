/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 17:46:42 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/01 20:29:15 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "functions.h"


// if puzzle has less than 17 clues, return 0, not a sudoku

void 	ft_printstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		isvalid(int number, int puzzle[][9], int row, int column)
{
	int i;
	int boxrow;

	i = 0;
	boxrow = 0;
	while (i++ < 9)
	{ 
		// while the iterator is less than # of columns/rows
		if (puzzle[i][column] == number)
			//check each # in column for number
			return (0);
		if (puzzle[row][column] == number)
			//check each # in row for number
			return (0);
	}
	//check box
	while (boxrow < 3)
	{
		
	}	
}

int		sudokusolver(int board[][9], int row, int column)
{
	int nextnumber;

	next number = 1;

	while (nextnumber < 10)
	{
		// check for next number
		nextnumber ++;
		if (isValid(nextnumber, puzzle, row, column))
		{ // if number incremented is finally a valid #
			puzzle[row][column] = nextnumber;
			// make that number the current row,column combo
			if (column == 8)
			{ // if that column is the 9th column
				if (sudokusolver(puzzle, row + 1, 0))
					// if the row is the 9th row
					return (1);
					// you have solved the puzzle
			}
			else
			{
				if (sudokusolver(puzzle, row, column + 1))
				// row = 9, column +1 = 9
					return (1);
					//you hve solved the puzzle
			}

		}
		puzzle[row][column] = 0;
	}
}

int		**print_puzzle(int board[][])
{

}


int		main(int argc, char **argv)
{
	char **char_string;
	char ***sudoku_square;
	int clue_count;
	int i;

	i = 1;
	j = 0;
	sudoku_row = (int*)malloc(sizeof(char) * 9)
	if (argc == 10)
	{
		while (argv[i])
		{
			while (arg[i][j])
			{
				if (argv[i][j] <= '9' && argv[i][j] >= '1')
					clue_count++;
				j++;
			}
			char_string[i-1] = argv[i];
			i++;
		}
		if (clue_count < 17)
			return (0);
	}
	else
		return (0);
}
