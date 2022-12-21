/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:54:06 by hugur             #+#    #+#             */
/*   Updated: 2022/12/21 19:27:29 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

char	*ft_line(char *str)
{
	int	i;
	char	*tmp;

	i = 0;
	if(str[i] == '\0')
		return (NULL);
	
	while(str[i] != '\n' && str[i] != '\0')
		i++;
	tmp = malloc(sizeof(char) * (i + 2));
	if (!tmp)
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		tmp[i] = str[i];
		i++;
	}
	if (tmp[i] != '\0')
		tmp[i] = '\0';
	//printf("tmp dans ft_line = %s\n", tmp);
	return (tmp);
}

char	*ft_next_line(char *str)
{
	int	i;
	int	j;
	char *tmp;

	i = 0;
	while(str[i] != '\n' && str[i] != '\0')
		i++;
	tmp = malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	j = 0;
	while (str[++i] != '\0')
	{
		tmp[j] = str[i];
		j++;
	}
	tmp[j] = '\0';
	return (tmp);
}

char	*ft_readfile(int fd, char *str)
{
	int	ret;
	char	*buf;
	
	ret = 1;
	
	while(ft_strchr(str,'\n') == NULL && ret != 0)
	{
		buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (buf == NULL)
			return (NULL);
		ret = read(fd, buf, BUFFER_SIZE);
			if (ret == -1)
			{
				free (buf);
				return (NULL);
			}
		buf[ret] = '\0';
		str = ft_strjoin(str,buf);
		free (buf);
	}
	return (str);
}

char	*get_next_line(int fd)
{
	static char *str;
	char	*line;
	
	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	if (!str)
		str = ft_strdup("");
	//printf("str dans GNL avant fonction %s\n", str);
	str = ft_readfile(fd, str);
	//printf("str dans GNL après fonction %s\n", str);
	line = ft_line(str);
	str = ft_next_line(str);
	return(line);
}
