/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:22:20 by hugur             #+#    #+#             */
/*   Updated: 2022/12/26 17:27:22 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
	{
		free ((char *)str);
		return (0);
	}
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

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s[i])
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	i;

	ptr = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!(ptr))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n)
	{
		*p++ = 0;
		n--;
	}
}

void	*ft_calloc(size_t	count, size_t	size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize == 0 || !dst)
		return (ft_strlen(src));
	i = 0;
	while ((src[i] != 0) && (i < dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}