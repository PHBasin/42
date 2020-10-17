/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 09:10:12 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/17 12:48:22 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_o(int x, int y, int i, int j)
{
	if ((i == 1 || i == x) && (j == 1 || j == y))
	{
		ft_putchar('o');
	}
}

void	ft_print_dash(int x, int y, int i, int j)
{
	if ((i > 1 && i < x) && (j == 1 || j == y))
	{
		ft_putchar('-');
	}
}

void	ft_print_v_bar(int x, int y, int i, int j)
{
	if ((i == 1 || i == x) && (j > 1 && j < y))
	{
		ft_putchar('|');
	}
}

void	ft_print_space(int x, int y, int i, int j)
{
	if ((i > 1 && i < x) && (j > 1 && j < y))
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (j <= y)
	{
		while (i != x + 1)
		{
			ft_print_o(x, y, i, j);
			ft_print_dash(x, y, i, j);
			ft_print_v_bar(x, y, i, j);
			ft_print_space(x, y, i, j);
			i++;
		}
		ft_putchar('\n');
		i = 1;
		j++;
	}
}
