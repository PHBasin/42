/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:43:30 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/25 10:29:06 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_one_out_of_two(char *str)
{
	int i;

	i = 0;
	while (i < 31)
	{
		if (str[i] > 52 || str[i] < 49)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_is_valid(char *str)
{
	int num;
	int spc;

	num = 0;
	spc = 0;
	if (ft_one_out_of_two(str))
	{
		while (*str)
		{
			if (*str > 48 && *str < 53)
				num++;
			else if (*str == 32)
				spc++;
			else
				return (0);
			str++;
		}
		if (num == 16 && spc == 15)
			return (1);
	}
	return (0);
}

int	ft_parse_arg(char sights[4][4], char *str)
{
	int row;
	int column;
	int counter;

	counter = 0;
	row = 0;
	if (ft_is_valid(str))
	{
		while (row < 4)
		{
			column = 0;
			while (column < 4)
			{
				sights[row][column] = str[counter];
				column++;
				counter += 2;
			}
			row++;
		}
		return (1);
	}
	return (0);
}
