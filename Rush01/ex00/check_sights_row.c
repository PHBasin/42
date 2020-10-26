/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sights_row.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:12:16 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/25 17:50:22 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_4(char sights, int i, char board[4][4])
{
	int column;

	column = 0;
	while (column < 4)
	{
		if (board[i][column] != (column + 1 + 48))
			return (0);
		column++;
	}
	return (1);
}

int	ft_3(char sights, int i, char board[4][4])
{
	int j;
	int column;
	int counter;

	j = 1;
	column = 0;
	counter = 0;
	while (j < 4)
	{
		if (board[i][column] < board[i][j])
			counter++;
		j++;
		column++;
	}
	return ((counter == 2));
}

int	ft_2(char sights, int i, char board[4][4])
{
	int j;
	int column;
	int counter;

	j = 1;
	column = 0;
	counter = 0;
	while (j < 4)
	{
		if (board[i][column] < board[i][j])
			counter++;
		j++;
		column++;
	}
	return ((counter >= 1));
}

int	ft_1(char sights, int i, char board[4][4])
{
	if (board[i][0] != (4 + 48))
		return (0);
	return (1);
}

int	check_rows_sight(char sights[4][4], char board[4][4])
{
	int i;
	int row;

	row = 2;
	while (row < 3)
	{
		i = 0;
		while (i < 4)
		{
			if (sights[row][i] == (4 + 48) && !ft_4(sights[row][i], i, board))
				return (0);
			if (sights[row][i] == (3 + 48) && !ft_3(sights[row][i], i, board))
				return (0);
			if (sights[row][i] == (2 + 48) && !ft_2(sights[row][i], i, board))
				return (0);
			if (sights[row][i] == (1 + 48) && !ft_1(sights[row][i], i, board))
				return (0);
			i++;
		}
		row++;
	}
	return (1);
}
