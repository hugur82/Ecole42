/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:33:17 by hugur             #+#    #+#             */
/*   Updated: 2022/11/08 13:46:44 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wordcount( const char *s, char c)
{
	int	i;
	int count;
	int trigger;

	i = 0;
	count = 0;
	trigger = 0;
	while (s[i] != 0)
	{
		if (trigger == 0 && s[i] != c)
		{
			trigger = 1;
			count++;
		}
		else if (s[i] == c)
			trigger = 0;
		i++;
	}
	return (count);
}

char	*splitword(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (finish - start + 1));
	while (start + i< finish)
	{
		word[i] = str[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}
/*
char **ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s || !(split = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);	
}*/

char **ft_split(char const *s, char c)
{
	char **split;
	int i;
	int	idx; 
	int	j;

	split = malloc(sizeof(char *) * (wordcount(s,c) + 1));
	if (!split || !s)
		return (NULL);
	i = 0;
	idx = -1;
	j = 0;
	while (i <= ft_strlen(s))
	{
		if(idx < 0 && s[i] != c)
			idx = i;
		else if ((s[i] == c || i == ft_strlen(s)) && idx >= 0)
			{
				split[j] = splitword(s, idx, i);
				j++;
				idx = -1;
			}
		i++;
	}
	split[j] = 0;
	return (split);
}