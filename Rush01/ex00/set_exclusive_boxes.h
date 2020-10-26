/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_exclusive_boxes.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:59:14 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/25 19:27:17 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SET_EXCLUSIVE_BOXES_H
# define SET_EXCLUSIVE_BOXES_H

# include "ft_string.h"

# define N 4

void	set_exclusive_boxes(char board[N][N], int i, int j);
char	*get_possible_values(char board[N][N], char *values, int i, int j);
char	*init_possible_values(void);
#endif
