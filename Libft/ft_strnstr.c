/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:45:14 by hugur             #+#    #+#             */
/*   Updated: 2022/11/04 12:08:39 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (ft_isempty((char *)needle))
		return ((char *)haystack);
	i = 0;
	if (len > 0)
	{
		while (haystack[i] && i < len)
		{
			j = 0;
			while ((haystack[i + j] == needle[j]) && needle[j] && (i + j < len))
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[i]);
				j++;
			}
			i++;
		}
	}
	return (NULL);
}
