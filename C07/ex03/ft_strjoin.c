/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 07:37:10 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/27 11:41:22 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dst, char *src)
{
	char *d;

	d = dst;
	while (*d)
		d++;
	while (*src)
		*d++ = *src++;
	return (dst);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sep_size;
	int		str_size;
	int		i;
	char	*output;

	sep_size = ft_strlen(sep);
	str_size = 0;
	i = 0;
	while (i < size)
		str_size += ft_strlen(strs[i++]);
	output = malloc(sizeof(*output) * (str_size + (sep_size * (size - 1))));
	if (!output)
		return (NULL);
	i = 0;
	while (i < size)
	{
		output = ft_strcat(output, strs[i++]);
		if (i < size)
			output = ft_strcat(output, sep);
	}
	return (output);
}
