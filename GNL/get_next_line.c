/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:54:06 by hugur             #+#    #+#             */
/*   Updated: 2022/12/13 22:35:12 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"
#ifndef	BUFFER_SIZE
#define BUFFER_SIZE 5
#endif


char	*ft_readfile(int fd, int endofline[])
{
	int	ret;
	char	*buffer;
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
		if(ft_strchr(buffer, '\n') != NULL)
			endofline[1] = 1;

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
		save = ft_strjoin(save,buffer);
		printf("le save a la fin: %s\n", save);
		
		free(buffer);
	return (save);
}

char	*get_next_line(int fd)
{

	static char	*line;
	char	*tmp;
	int	endofline[1];
	
	endofline[1] = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	while (!endofline[1])
	{
		tmp = ft_readfile(fd, endofline);
		line = ft_strjoin(line,tmp);
		free(tmp);
		printf("le line a la fin: %s\n", line);
	}
	return (line);
}
