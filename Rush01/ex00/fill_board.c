/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:24:34 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/25 19:23:22 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_board.h"

extern int g_errno;

void	set_next_boxes(char board[N][N])
{
	int i;
	int j;

	i = 0;
	while (i < N && !g_errno)
	{
		j = 0;
		while (j < N)
		{
			if (board[i][j] == '0')
			{
				set_exclusive_boxes(board, i, j);
				set_uniq_boxes(board, i, j);
			}
			j++;
		}
		i++;
	}
}

int		set_a_random_valid_remainding_value(char board[N][N])
{
	int		i;
	int		j;
	char	*box_values;

	i = -1;
	while (++i < N)
	{
		j = -1;
		while (++j < N)
		{
			if (board[i][j] == '0')
			{
				box_values = get_possible_values(board, box_values, i, j);
				if (ft_strlen(box_values) != 0)
				{
					board[j][i] = box_values[0];
					return (1);
				}
				else
					g_errno = 1;
			}
		}
	}
	return (0);
}

void	fill_board(char board[N][N], char sights[N][N])
{
	char	bakboard[4][4];

	init_board(board);
	init_board(bakboard);
	set_boxes_from_sight_values(board, sights);
	while (!is_full(board) && !g_errno)
	{
		while (is_still_updated(board, bakboard) && !is_full(board) && !g_errno)
		{
			board_backup(board, bakboard);
			set_next_boxes(board);
		}
		if (!is_full(board) && !g_errno)
		{
			board_backup(board, bakboard);
			set_a_random_valid_remainding_value(board);
		}
	}
}
