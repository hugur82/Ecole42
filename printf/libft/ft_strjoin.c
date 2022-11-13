/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:45:29 by hugur             #+#    #+#             */
/*   Updated: 2022/11/04 12:01:51 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	while (s1[++j])
		newstr[++i] = s1[j];
	j = -1;
	while (s2[++j])
		newstr[++i] = s2[j];
	newstr[++i] = '\0';
	return (newstr);
}
