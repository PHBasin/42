/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 14:27:18 by phbasin           #+#    #+#             */
/*   Updated: 2021/01/04 15:19:09 by phbasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define BOARD_SIZE 10

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_board(int *chessboard)
{
	int	i;

	i = 0;
	while (i < BOARD_SIZE)
		ft_putchar(chessboard[i++] + '0');
	ft_putchar('\n');
}

int		valid_position(int *chessboard, int index, int value)
{
	int j;

	j = 0;
	while (j < index)
	{
		if (value == chessboard[j] ||
			value == chessboard[j] - (index - j) ||
			value == chessboard[j] + (index - j))
			return (0);
		j++;
	}
	return (1);
}

void	search_solution(int *chessboard, int index, int *solutions)
{
	int value;

	if (index == BOARD_SIZE)
	{
		print_board(chessboard);
		(*solutions)++;
		return;
	}
	value = -1;
	while (++value < BOARD_SIZE)
	{
		if (!valid_position(chessboard, index, value))
			continue;
		chessboard[index] = value;
		search_solution(chessboard, index + 1, solutions);
	}
}

int		ft_ten_queens_puzzle(void)
{
	int	chessboard[BOARD_SIZE];
	int	solutions;

	solutions = 0;
	search_solution(chessboard, 0, &solutions);
	return (solutions);
}
