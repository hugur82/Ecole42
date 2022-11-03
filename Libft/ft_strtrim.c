/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:12:37 by hugur             #+#    #+#             */
/*   Updated: 2022/11/03 18:41:40 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_countmalloc(char const *s1, char const *set)
{
	size_t  i;
	size_t  j;
	size_t  issame;
	size_t	count;

	count = 0;
	i = 0;
	while(s1[i])
	{
		j = 0;
		issame = 0;
		while((s1[i + j] == set[j]) && set[j])
			{
				if (set[j + 1] == 0)
					issame = 1;
				j++;
			}
		if (issame == 1)
			count += 1;
		i++;
	}
	return (count * ft_strlen(set));
}

char *ft_replace(char const *s1, char const *set, char *str)
{
	size_t  i;
	size_t  j;
	size_t  issame;
		
	i = 0;
	while(s1[i])
	{
		j = 0;
		issame = 0;
		while((s1[i + j] == set[j]) && set[j])
			{
				if (set[j + 1] == 0)
					issame = 1;
				j++;
			}
		if (issame == 1)
			
		i++;
	}

}

char *ft_strtrim(char const *s1, char const *set)
{
	char *str;

	str = malloc(sizeof(char) * ft_countmalloc(s1, set) + 1);
	if (!(str))
		return (NULL);
	str = ft_replace(s1, set, str);
	


	


}