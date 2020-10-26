/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sights_col.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:30:41 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/25 19:11:46 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_SIGHTS_COL_H
# define CHECK_SIGHTS_COL_H

int	ft_4(char sights, int i, char board[4][4]);
int	ft_3(char sights, int i, char board[4][4]);
int	ft_2(char sights, int i, char board[4][4]);
int	ft_1(char sights, int i, char board[4][4]);
int	check_rows_sight(char sights[4][4], char board[4][4]);
#endif
