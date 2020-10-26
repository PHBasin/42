/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 19:13:33 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/25 18:58:05 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_board.h"

void	ft_print_board(char board[4][4])
{
	int row;
	int column;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			write(1, &board[row][column], 1);
			if (column < 3)
				write(1, " ", 1);
			column++;
		}
		write(1, "\n", 1);
		row++;
	}
}

void	board_backup(char board[4][4], char bakboard[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			bakboard[i][j] = board[i][j];
			j++;
		}
		i++;
	}
}

void	init_board(char board[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			board[i][j] = '0';
			j++;
		}
		i++;
	}
}

int		is_still_updated(char board[4][4], char bakboard[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (board[i][j] != bakboard[i][j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		is_full(char board[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (board[i][j] == '0')
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
