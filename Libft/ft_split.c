/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:27:38 by hugur             #+#    #+#             */
/*   Updated: 2022/11/06 17:56:27 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_wordcount(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

int ft_charcount(char *mem, char c)
{
	int i;
	int count;

	i = 0;
	count = 1;
	while(mem[i] && mem[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

char **ft_split(char const *s, char c)
{
	char    **str;
	char	*mem;
	int count[2];
	int i;
	
	mem =(char *)s;
	if (s == NULL || c == '\0')
		return (NULL);
	i = 0;
	//printf("Resultat de wordcount: %d\n", ft_wordcount(s, c));
	count[0] = ft_wordcount(mem, c);
	str = malloc(sizeof(char *) * count[0] + 1);
	if (!str)
		return (NULL);
	while (i < count[0])
	{
		count[1] = ft_charcount(mem, c);
		str[i] = malloc(sizeof(char) * count[1] + 1);
		if (!str[i])
			return (NULL);
		while (str[i])
		{

		}
		i++;
	}
	printf("test : %s",ft_strchr(s, (int)c));
	return(NULL);
}