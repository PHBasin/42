/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_uniq_boxes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:02:21 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/25 19:02:23 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_uniq_boxes.h"

void	set_uniq_boxes(char board[N][N], int i, int j)
{
	char	**neighbours_values;
	char	*box_values;

	neighbours_values = get_neighbours_possible_values(board, i, j);
	box_values = init_possible_values();
	box_values = get_possible_values(board, box_values, i, j);
	box_values = rm_non_uniq_values(neighbours_values, box_values);
	if (ft_strlen(box_values) == 1)
		board[i][j] = box_values[0];
	free(box_values);
	free(neighbours_values);
}

char	**get_neighbours_possible_values(char bd[N][N], int i, int j)
{
	char	**ngbr_vals;
	int		unknown_neighbour_count;
	int		ngbr_idx;
	int		k;
	int		l;

	ngbr_idx = 0;
	unknown_neighbour_count = count_unknown_neighbours(bd, i, j);
	ngbr_vals = init_neighbours_possible_values(unknown_neighbour_count);
	while (ngbr_vals[ngbr_idx])
	{
		l = -1;
		while (++l < N)
		{
			k = -1;
			while (++k < N)
			{
				ngbr_vals[ngbr_idx] = rm_char(ngbr_vals[ngbr_idx], bd[k][l]);
				ngbr_vals[ngbr_idx] = rm_char(ngbr_vals[ngbr_idx], bd[k][l]);
			}
		}
		ngbr_idx++;
	}
	return (ngbr_vals);
}

int		count_unknown_neighbours(char board[N][N], int i, int j)
{
	int	k;
	int	count;

	k = 0;
	count = 0;
	while (k < N)
	{
		if (j != k && board[i][k] == '0')
			count++;
		if (i != k && board[k][j] == '0')
			count++;
		k++;
	}
	return (count);
}

char	**init_neighbours_possible_values(int neighbour_count)
{
	int		i;
	char	**values;

	i = 0;
	values = malloc((neighbour_count + 1) * (sizeof(void *)));
	while (i < neighbour_count)
	{
		values[i] = init_possible_values();
		i++;
	}
	values[i] = NULL;
	return (values);
}

char	*rm_non_uniq_values(char **ngbr_vals, char *box_vals)
{
	int		ngbr_idx;
	int		ngbr_val_idx;
	int		box_val_idx;

	ngbr_idx = 0;
	while (ngbr_vals[ngbr_idx])
	{
		ngbr_val_idx = 0;
		while (ngbr_vals[ngbr_idx][ngbr_val_idx])
		{
			box_val_idx = 0;
			while (box_vals[box_val_idx])
			{
				if (ngbr_vals[ngbr_idx][ngbr_val_idx] == box_vals[box_val_idx])
				{
					box_vals = rm_char(box_vals, box_vals[box_val_idx]);
				}
				box_val_idx++;
			}
			ngbr_val_idx++;
		}
		ngbr_idx++;
	}
	return (box_vals);
}
