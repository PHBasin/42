/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_uniq_boxes.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:55:32 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/25 19:40:56 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SET_UNIQ_BOXES_H
# define SET_UNIQ_BOXES_H
# include <stdlib.h>
# include "set_exclusive_boxes.h"
# include "ft_string.h"
# define N 4

void	set_uniq_boxes(char board[N][N], int i, int j);
char	**get_neighbours_possible_values(char board[N][N], int i, int j);
int		count_unknown_neighbours(char board[N][N], int i, int j);
char	**init_neighbours_possible_values(int neighbour_count);
char	*rm_non_uniq_values(char **ngbr_vals, char *box_vls);
#endif
