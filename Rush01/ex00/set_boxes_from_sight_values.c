/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_boxes_from_sight_values.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:51:40 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/25 18:14:24 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_boxes_from_sight_values.h"

extern int g_errno;

void	set_boxes_from_sight_values(char board[N][N], char sights[N][N])
{
	int i;
	int up;
	int down;
	int left;
	int right;

	i = 0;
	while (i < N && !g_errno)
	{
		up = sights[UP][i];
		down = sights[DOWN][i];
		left = sights[LEFT][i];
		right = sights[RIGHT][i];
		set_boxes_with_up(board, i, up, down);
		set_boxes_with_down(board, i, up, down);
		set_boxes_with_left(board, i, left, right);
		set_boxes_with_right(board, i, left, right);
		i++;
	}
}

void	set_boxes_with_up(char board[N][N], int i, char up, char down)
{
	int j;

	if (up == '4')
	{
		j = 0;
		while (j < N)
		{
			set_value(board, j, i, j + 1);
			j++;
		}
	}
	else if (up == '1')
	{
		set_value(board, 0, i, 4);
		if (down == '2')
		{
			set_value(board, 3, i, 3);
		}
	}
	else if (up == '2' && down == '3')
	{
		set_value(board, 1, i, 4);
	}
}

void	set_boxes_with_down(char board[N][N], int i, char up, char down)
{
	int j;

	if (down == '4')
	{
		j = 0;
		while (j < N)
		{
			set_value(board, j, i, N - j);
			j++;
		}
	}
	else if (down == '1')
	{
		set_value(board, 3, i, 4);
		if (up == '2')
		{
			set_value(board, 0, i, 3);
		}
	}
	else if (down == '2' && up == '3')
	{
		set_value(board, 2, i, 4);
	}
}

void	set_boxes_with_left(char board[N][N], int i, char left, char right)
{
	int j;

	if (left == '4')
	{
		j = 0;
		while (j < N)
		{
			set_value(board, i, j, j + 1);
			j++;
		}
	}
	else if (left == '1')
	{
		set_value(board, i, 0, 4);
		if (right == '2')
		{
			set_value(board, i, 3, 3);
		}
	}
	else if (left == '2' && right == '3')
	{
		set_value(board, i, 1, 4);
	}
}

void	set_boxes_with_right(char board[N][N], int i, char left, char right)
{
	int j;

	if (right == '4')
	{
		j = 0;
		while (j < N)
		{
			set_value(board, i, j, N - j);
			j++;
		}
	}
	else if (right == '1')
	{
		set_value(board, i, 3, 4);
		if (left == '2')
		{
			set_value(board, i, 0, 3);
		}
	}
	else if (right == '2' && left == '3')
	{
		set_value(board, i, 2, 4);
	}
}
