/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:05:07 by phbasin           #+#    #+#             */
/*   Updated: 2020/11/13 11:21:42 by phbasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_sep(char *str, char c)
{
	while (*str)
		if (*str++ == c)
			return (1);
	return (0);
}

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	**ft_split(char *str, char *charset)
{
	int i;
	int j;
	char *sep;

	malloc(sizeof(*sep) * ft_strlen(str));
	if (ft_strlen(str) > 0)
	{
		i = 0;
		if (ft_strlen(charset) > 0)
			while (charset[i])
				sep[j++] = ft_index_sep(str, charset[i++]);
		else
			return (str)
	}
}
