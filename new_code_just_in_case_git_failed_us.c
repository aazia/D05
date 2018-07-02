/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 17:46:42 by azkeever          #+#    #+#             */
/*   Updated: 2018/07/01 11:56:44 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
  write(1, &c, 1);
}

// converts string to int
int		ft_atoi(char *str)
{
	int r;
	int res;

	r = 0;
	while (str[r])
	{
		if (str[r] >= '1' && str[r] <= '9')
			res = (res * 10) + (str[r] - '0'); 
		else if(str[r] == '.')
			res = res * 10;
		else
			return (-1);		
	}
  return (0);
}

// prints string
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

/* check for empty space in the grid, returns 1 for empty space, 0 for none*/
int is_empty(int puzzle[9][9], int *row, int *col)
{
	while(*row < 9)
	{
		while(*col < 9)
		{
			if(puzzle[*row][*col] == 0)
				return (1);
			*col += 1;
		}
		*row += 1;
	}
	return (0);
}

/* checks if number's used in specific row*/
int check_row(int puzzle[9][9], int row, int num)
{	
	int col;

	col = 0;
	while (col < 9)
		if(puzzle[row][col] == num) 
			return (1);
		col++;
	return (0);
}

/*checks if number's used in specific column */
int check_column(int puzzle[9][9], int col, int num)
{
	int row;

	row = 0;
	while (row < 9)
		if(puzzle[row][col] == num)
			return (1);
		row++;
	return (0);
}

// checks the box that the number is joined in
int check_bx(int puzzle[9][9], int box_row, int box_col, int num)
{
	int row;
	int col;

	row = 0;
	col = 0;

	while (row < 3)
	{
		while (col < 3)
		{
			if(puzzle[box_row + row][col+box_col] == num)
				return 1;
			col++;
		}
		row++;	
	}
	return 0;
}

//checks if the spot is valid
int		is_valid(int num, int puzzle[9][9], int row, int col)
{
	return (!check_row(puzzle, row, num) && !check_column(puzzle, col, num)
		&& !check_bx(puzzle, row - (row % 3), col - (col % 3), num));
}

// logic for solving sudoku, assigns value to unassigned positions
int		sudokusolver(int board[9][9])
{
	int row;
	int col;
	int nextnumber;

  row = 0;
  col = 0;
	// no empty space, return complete board
	if (!is_empty(board, &row, &col))
		return (1);

	nextnumber = 1;

	while (nextnumber < 9)
	{
		// check for next number
		nextnumber++;
		if (is_valid(nextnumber, board, row, col))
		{ // if number incremented is finally a valid #
			board[row][col] = nextnumber;
			// make that number the current row,column combo

			// if (column == 8)
			// { // if that column is the 9th column
			// 	if (sudokusolver(puzzle, row + 1, 0))
			// 		// if the row is the 9th row
			// 		return (1);
			// 		// you have solved the puzzle
			// }
			// else
			// {
			// 	if (sudokusolver(puzzle, row, column + 1))
			// 	// row = 9, column +1 = 9
			// 		return (1);
			// 		//you hve solved the puzzle
			// }
			// return if success
			if (sudokusolver(board))
				return (1);
			//fail and unassign
			board[row][col] = 0;
		}
		
	}
	//return 0 to trigger backt rack
	return (0);
}
//unfinished

void		print_puzzle(int board[9][9])
{
	int row;
	int col;

  row = 0;
  while (row < 9)
  {
    col = 0;
    while (col < 9)
    {
      ft_putchar(board[row][col] + '0');
      col++;
    }
    row++;
    ft_putchar('\n');
  }
}


int		main(int argc, char **argv)
{
	int grid[9][9];
	int clue_count;
	int i;
	int j;

	i = 1;
	clue_count = 0;
	if (argc == 10)
	{
		while (argv[i])
		{
		  j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] <= '9' && argv[i][j] >= '1')
					clue_count++;
				grid[i-1][j] = argv[i][j] - '0';
				j++;
			}			
			i++;
		}
		printf("%d CC\n", clue_count);
		if (clue_count < 17)
		{
			ft_printstr("ErrorX\n");
			return (0);
		}
		if(sudokusolver(grid))
		{	
			print_puzzle(grid);
			return (1);
		}
		ft_printstr("ErrorC\n");
		return (0);
	}
	else
	{	
		ft_printstr("ErrorV\n");
		return (0);
	}
	return (-1);
}
