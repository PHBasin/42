/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 09:35:48 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/15 16:51:43 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *tab, int *first)
{
	int temp;

	temp = tab[*first];
	tab[*first] = tab[*first + 1];
	tab[*first + 1] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int first;
	int counter;

	counter = 0;
	while (counter != size)
	{
		first = 0;
		while (first < size)
		{
			if (tab[first] > tab[first + 1])
			{
				ft_swap(tab, &first);
			}
			else
			{
				first++;
			}
		}
		counter++;
	}
}
