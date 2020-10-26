/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_unicity.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 08:15:22 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/25 12:26:56 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_duplicate_in_rows(char board[4][4])
{
	int i;
	int j;
	int row;

	row = 0;
	while (row < 4)
	{
		j = 0;
		while (j < 4)
		{
			i = 0;
			while (i < 4)
			{
				if (i != j && board[row][i] == board[row][j])
				{
					return (0);
				}
				i++;
			}
			j++;
		}
		row++;
	}
	return (1);
}

int	ft_is_duplicate_in_columns(char board[4][4])
{
	int i;
	int j;
	int column;

	column = 0;
	while (column < 4)
	{
		j = 0;
		while (j < 4)
		{
			i = 0;
			while (i < 4)
			{
				if (i != j && board[i][column] == board[j][column])
					return (0);
				i++;
			}
			j++;
		}
		column++;
	}
	return (1);
}
