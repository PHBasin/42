/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:39:00 by phbasin           #+#    #+#             */
/*   Updated: 2020/12/02 17:41:09 by phbasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int b;
	int s;

	i = 1;
	while (i < length && !(b = f(tab[i - 1], tab[i])))
		i++;
	while (++i < length)
	{
		s = f(tab[i - 1], tab[i]);
		if ((b < 0 && s > 0) || (b > 0 && s < 0))
			return (0);
	}
	return (1);
}
