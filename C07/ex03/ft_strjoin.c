/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 18:57:54 by phbasin           #+#    #+#             */
/*   Updated: 2020/11/13 10:00:41 by phbasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dst, char *src)
{
	int i;
	int j;

	i = ft_strlen(dst);
	j = 0;
	while (src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
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
	if (size > 0)
		str_size += sep_size * (size - 1);
	output = malloc(sizeof(*output) * str_size);
	if (!output)
		return (NULL);
	i = 0;
	while (i < size)
	{
		output = ft_strcat(output, strs[i++]);
		if (i < size)
			output = ft_strcat(output, sep);
	}
	output[str_size] = '\0';
	return (output);
}
