/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:54:06 by hugur             #+#    #+#             */
/*   Updated: 2022/12/26 19:09:08 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

char    *free_join(char *dst, char *buff)
{
    char    *ret_line;

    if (!dst)
    {
        dst = (char *)malloc(1 * sizeof(char));
        dst[0] = 0;
    }
    ret_line = ft_strjoin(dst, buff);
    free(dst);
    return (ret_line);
}

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
	if (str[i] == '\n')
		tmp[i++] = '\n';
	if (tmp[i] != '\0')
		tmp[i] = '\0';
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
	if(!str[i])
	{
		free(str);
		return (0);
	}
	tmp = malloc(sizeof(char) * (ft_strlen(str) - i + 2));
	if (!tmp)
		return (NULL);
	j = 0;
	while (str[++i] != '\0')
		tmp[j++] = str[i];
	tmp[j] = '\0';
	free (str);
	return (tmp);
}

char	*ft_readfile(int fd, char *str)
{
	int		ret;
	char	*buf;
	
	if (!str)
		str = ft_calloc(1,1);
	// printf("str start function = %s\n", str);
	
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	// printf("str after malloc = %s\n", str);
	if (!buf)
		return (NULL);
	// printf("str before while = %s\n", str);
	ret = 1;
	while(!ft_strchr(str, '\n') && ret != 0)
	{
		// printf ("str start while = %s\n", str);
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret == -1)
		{
			free (str);
			free (buf);
			return (NULL);
		}
		buf[ret] = '\0';
		//str = ft_strjoin(str, buf);
		str = free_join(str, buf);
		// printf ("str end while = %s\n", str);
	}
	free (buf);
	return (str);
}

char	*get_next_line(int fd)
{
	static char *str;
	char	*line;
	
	if (BUFFER_SIZE <= 0 || fd < 0/* || read(fd, 0, 0) < 0*/)
		return (NULL);
	
	str = ft_readfile(fd, str);
	if(!str)
		return (NULL);
	line = ft_line(str);
	str = ft_next_line(str);
	return(line);
}
