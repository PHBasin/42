/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:15:24 by phbasin           #+#    #+#             */
/*   Updated: 2020/11/21 20:58:22 by phbasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libgen.h>	// basename
#include <errno.h>	// errno
#include <unistd.h>	// close read write
#include <string.h>	// strerror
#include <fcntl.h>	// open

void	ft_putstr(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

int		ft_displayfile(char *path)
{
	int		fd;
	int		len;
	char	buf[29696];

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	len = read(fd, buf, 29696);
	ft_putstr(1, buf);
	close(fd);
	return (len);
}

int		main(int argc, char *argv[])
{
	int		i;

	if (argc < 2)
		ft_putstr(2, strerror(errno));
	i = 1;
	while (i++ < argc)
	{
		if (ft_displayfile(argv[i]) < 0)
			ft_putstr(2, strerror(errno));
	}
	return (0);
}
