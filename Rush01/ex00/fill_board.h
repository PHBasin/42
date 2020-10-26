/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_board.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:30:58 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/25 19:22:37 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILL_BOARD_H
# define FILL_BOARD_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "set_boxes_from_sight_values.h"
# include "print_board.h"
# include "ft_string.h"
# include "set_uniq_boxes.h"
# include "set_exclusive_boxes.h"

# define N 4

char	*init_possible_values();
char	**init_neighbours_possible_values(int neighbour_count);
char	*get_possible_values(char board[N][N], char *values, int i, int j);
void	set_exclusive_boxes(char board[N][N], int i, int j);
int		count_unknown_neighbours(char board[N][N], int i, int j);
char	**get_neighbours_possible_values(char board[N][N], int i, int j);
void	set_uniq_boxes(char board[N][N], int i, int j);
void	set_next_boxes(char board[N][N]);
int		set_a_random_valid_remainding_value(char board[N][N]);
void	fill_board(char board[N][N], char sights[N][N]);
#endif
