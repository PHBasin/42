/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   box.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:20:53 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/25 19:08:31 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOX_H
# define BOX_H
# define N 4
# define UP 0
# define DOWN 1
# define LEFT 2
# define RIGHT 3

void set_value(char board[N][N], int i, int j, int v);
#endif
