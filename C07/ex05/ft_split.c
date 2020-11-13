/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:05:07 by phbasin           #+#    #+#             */
/*   Updated: 2020/11/13 17:42:51 by phbasin          ###   ########.fr       */
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

int		ft_sep_nbr(char *str, char *charset)
{
	int n;

	n = 0;
	while (*str)
		if (ft_is_sep(charset, *str++))
			n++;
	return (n);
}

char	*ft_index_sep(char *str, char *charset, char *sep)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[j])
	{
		if (ft_is_sep(charset, str[j]))
			sep[i++] = j +;
	return (sep);
}


/*
int		ft_sep_nbr(char *str, char *charset, char *sep)
{
	int b;
	int n;

	b = 0;
	n = 0;
	while (*str)
	{
		if (!ft_is_sep(charset, *str))
		{
			if (b == 0)
				n += 1;
			b = 1;
		}
		else
			b = 0;
		str++;
	}
	return (n);
}
*/

char	**ft_split(char *str, char *charset)
{
	int i;
	int j;
	char **output;
	char *sep;

	sep = malloc(sizeof(*sep) * ft_sep_nbr(str, charset));
	while (*str)
	{
		if (!ft_is_sep(charset, *str))
		{
			output[i][j] = *str;
			j++;
		}
		str++;
	}
	return (0);
}
