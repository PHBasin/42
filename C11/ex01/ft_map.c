/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:19:13 by phbasin           #+#    #+#             */
/*   Updated: 2020/12/03 13:45:26 by phbasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	i;

	i = -1;
	result = malloc(sizeof(*result) * length + 1);
	if (length < 1 || !result)
		return (NULL);
	while (++i < length)
		result[i] = f(tab[i]);
	return (result);
}
