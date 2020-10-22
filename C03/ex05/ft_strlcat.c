/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 09:27:39 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/21 17:42:37 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dst_size;
	unsigned int	src_size;
	unsigned int	i;

	i = 0;
	dst_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size <= dst_size)
		return (src_size + size);
	while (src[i] && i < size - dst_size - 1)
	{
		dest[dst_size + i] = src[i];
		i++;
	}
	dest[dst_size + i] = '\0';
	return (dst_size + src_size);
}
