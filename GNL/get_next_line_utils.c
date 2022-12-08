/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:22:20 by hugur             #+#    #+#             */
/*   Updated: 2022/12/08 18:01:20 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		ft_putchar(*str++);
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	strsize;
	char	*newstr;
	size_t	i;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i = -1;
	j = -1;
	strsize = ft_strlen(s1) + ft_strlen(s2);
	newstr = (char *)malloc(sizeof(*newstr) * strsize + 1);
	if (!(newstr))
		return (NULL);
	while (s1[++j] != '\0')
		newstr[++i] = s1[j];
	j = -1;
	while (s2[++j] != '\0')
		newstr[++i] = s2[j];
	newstr[++i] = '\0';
	return (newstr);
}

