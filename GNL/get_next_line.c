/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:54:06 by hugur             #+#    #+#             */
/*   Updated: 2022/12/08 18:16:47 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"
#ifndef	BUFFER_SIZE
#define BUFFER_SIZE 5
#endif


char	*ft_readfile(int fd)
{
	int	ret;
	char	*buffer;
	char	*tmp;
	static char	*save;
	
		printf("le save a l entree de la fonction: %s\n", save);
		buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
		if (!buffer)
			return(0);
		ret = read(fd, buffer, BUFFER_SIZE);
		buffer[ret] = '\0';
		if(ret == -1)
		{
			free(buffer);
			return (NULL);
		}
		if (!save)
		{
			save = malloc(sizeof(char) * ( BUFFER_SIZE + 1));
			if (!save)
				return (0);
		}
		else
		{
			save = malloc(sizeof(char) * ( ft_strlen(save) + BUFFER_SIZE + 1));
			if (!save)
				return (0);
		}
		tmp = ft_strjoin("",save);
		printf("le save a la fin: %s\n", tmp);
		
		save  = ft_strjoin(tmp, buffer);
		printf("le save a la fin: %s\n", save);
		free(buffer);
	return (save);
}

char	*get_next_line(int fd)
{
	char	*buffer;
	static char	*line;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	ft_readfile(fd);
	ft_readfile(fd);
	line = ft_readfile(fd);
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
	
	if (close(fd) == -1)
	{
		ft_putstr("Close() fail");
		return (1);
	}
	return (0);
}