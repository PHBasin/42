/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 09:17:30 by phbasin           #+#    #+#             */
/*   Updated: 2020/11/29 20:15:40 by phbasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_default_display(char *buf, int len)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (buf[i])
		if (buf[i++] == '\n')
			n++;
	if (n > 10)
	{
		n = 0;
		while (n < 10)
			if (buf[--i] == '\n')
				n++;
		write(1, &buf[i], len - i);
	}
	else
		write(1, buf, len);
}

int		ft_open_file(char* path)
{
	char	buf[2048];
	int		fd;
	int		len;

	fd = path ? open(path, O_RDONLY) : 0;
	len = read(fd, buf, 2048);
	ft_default_display(buf, len);
	if (fd != 0)
		close(fd);
	return (len ? -1 : 0);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
		ft_open_file(argv[i++]);
	return (0);
}
