/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sights.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 12:08:22 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/25 17:41:50 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_4(char sights, int i, char board[4][4])
{
	int row;

	row = 0;
	while (row < 4)
	{
		if (board[row][i] != (row + 1 + 48))
			return (0);
		row++;
	}
	return (1);
}

int	ft_3(char sights, int i, char board[4][4])
{
	int j;
	int row;
	int counter;

	j = 1;
	row = 0;
	counter = 0;
	while (j < 4)
	{
		if (board[row][i] < board[j][i])
			counter++;
		j++;
		row++;
	}
	return ((counter == 2));
}

int	ft_2(char sights, int i, char board[4][4])
{
	int j;
	int row;
	int counter;

	j = 1;
	row = 0;
	counter = 0;
	while (j < 4)
	{
		if (board[row][i] < board[j][i])
			counter++;
		j++;
		row++;
	}
	return ((counter >= 1));
}

int	ft_1(char sights, int i, char board[4][4])
{
	if (board[0][i] != (4 + 48))
		return (0);
	return (1);
}

int	check_columns_sights(char sights[4][4], char board[4][4])
{
	int i;
	int row;

	row = 0;
	while (row < 1)
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
