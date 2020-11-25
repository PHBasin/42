/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:15:24 by phbasin           #+#    #+#             */
/*   Updated: 2020/11/25 14:50:22 by phbasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libgen.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

void	ft_putstr(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_puterr(char *progname, char *path, char *error)
{
	ft_putstr(2, progname);
	ft_putstr(2, ": ");
	ft_putstr(2, path);
	ft_putstr(2, ": ");
	ft_putstr(2, error);
	ft_putstr(2, "\n");
}

int	ft_displayfile(char *path)
{
	char	buf[2048];
	int		fd;
	int		len;

	fd = path ? open(path, O_RDONLY) : 0;
	if (fd == -1)
		return (-1);
	while ((len = read(fd, buf, 2048)) > 0)
		write(1, buf, len);
	if (fd != 0)
		close(fd);
	return (len ? -1 : 0);
}

int		main(int argc, char *argv[])
{
	char 	*progname;
	int		i;

	progname = basename(argv[0]);
	if (argc < 2)
		ft_displayfile(NULL);
	i = 1;
	while (i < argc)
	{
		if (ft_displayfile(argv[i]) < 0)
			ft_puterr(progname, argv[i], strerror(errno));
		i++;
	}
	return (0);
}
