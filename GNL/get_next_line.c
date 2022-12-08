/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:54:06 by hugur             #+#    #+#             */
/*   Updated: 2022/12/07 22:50:40 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"
#ifndef	BUFFER_SIZE
#define BUFFER_SIZE 5
#endif





char	*ft_readfile(int fd, char *buffer)
{
	int	ret;
	static char	*save;
	int	size;
	int	start;

	size = 0;
	start = 1;	
	
		buffer = malloc(sizeof(char) * BUFFER_SIZE +1);
		ret = read(fd, buffer, BUFFER_SIZE);
		buffer[ret] = '\0';
		if(ret == -1)
		{
			free(buffer);
			return (NULL);
		}
		size += BUFFER_SIZE;
		save = malloc(sizeof(char) * size + 1);
		save = ft_strjoin(save,buffer);
		start = 0;
	

	return (save);
}

char	*get_next_line(int fd)
{
	char	*buffer;
	static char	*line;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	line = ft_readfile(fd, buffer);
	
	
	return (line);
}

int	main(void)
{
	int	fd;
	char	*str;

	fd = open("text", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Open() fail");
		return (1);
	}
	str = get_next_line(fd);
	ft_putstr(str);
	str = get_next_line(fd);
	ft_putstr(str);
	
	if (close(fd) == -1)
	{
		ft_putstr("Close() fail");
		return (1);
	}
	return (0);
}