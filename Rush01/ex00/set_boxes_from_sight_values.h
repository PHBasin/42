/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_boxes_from_sight_values.h                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:32:13 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/25 19:34:55 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SET_BOXES_FROM_SIGHT_VALUES_H
# define SET_BOXES_FROM_SIGHT_VALUES_H

# include "box.h"

# define N 4
# define UP 0
# define DOWN 1
# define LEFT 2
# define RIGHT 3

void set_boxes_from_sight_values(char board[N][N], char sights[N][N]);
void set_boxes_with_up(char board[N][N], int i, char up, char down);
void set_boxes_with_down(char board[N][N], int i, char up, char down);
void set_boxes_with_left(char board[N][N], int i, char left, char right);
void set_boxes_with_right(char board[N][N], int i, char left, char right);
#endif
