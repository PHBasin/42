/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_exclusive_boxes.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:28:08 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/25 19:28:10 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_exclusive_boxes.h"

extern int g_errno;

void	set_exclusive_boxes(char board[N][N], int i, int j)
{
	char	*box_possible_values;

	box_possible_values = NULL;
	box_possible_values = get_possible_values(board, box_possible_values, i, j);
	if (ft_strlen(box_possible_values) == 0)
	{
		g_errno = 1;
	}
	else if (ft_strlen(box_possible_values) == 1)
	{
		board[i][j] = box_possible_values[0];
	}
	free(box_possible_values);
}

char	*get_possible_values(char board[N][N], char *values, int i, int j)
{
	int k;

	k = 0;
	values = init_possible_values();
	while (k < 4)
	{
		values = rm_char(values, board[i][k]);
		values = rm_char(values, board[k][j]);
		k++;
	}
	return (values);
}

char	*init_possible_values(void)
{
	char	*values;
	int		i;

	values = malloc(N + 1);
	i = 0;
	while (i < N)
	{
		values[i] = i + 1 + '0';
		i++;
	}
	values[i] = '\0';
	return (values);
}
