/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 09:35:26 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/15 16:52:25 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *tab, int *first, int *last)
{
	int temp;

	temp = tab[*first];
	tab[*first] = tab[*last];
	tab[*last] = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int first;
	int last;

	first = 0;
	last = size - 1;
	while (first != size / 2)
	{
		ft_swap(tab, &first, &last);
		first++;
		last--;
	}
}
