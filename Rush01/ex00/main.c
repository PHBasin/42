/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokino <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:37:38 by tokino            #+#    #+#             */
/*   Updated: 2020/10/25 19:37:49 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int g_errno;

int		main(int argc, char **argv)
{
	char	board[N][N];
	char	sights[4][4];
	int		is_valid;

	g_errno = 0;
	is_valid = 0;
	if (argc != 2)
		return (error());
	if (ft_parse_arg(sights, argv[1]))
	{
		init_board(board);
		fill_board(board, sights);
	}
	if (!g_errno)
	{
		ft_print_board(board);
		return (0);
	}
	else
		return (error());
}

int		error(void)
{
	ft_putstr("Error\n");
	return (-1);
}
