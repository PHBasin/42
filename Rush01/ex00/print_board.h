/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_board.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:23:40 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/25 19:16:02 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_BOARD_H
# define PRINT_BOARD_H

# include <unistd.h>

void	ft_print_board(char board[4][4]);
void	board_backup(char board[4][4], char bakboard[4][4]);
void	init_board(char board[4][4]);
int		is_still_updated(char board[4][4], char bakboard[4][4]);
int		is_full(char board[4][4]);
#endif
