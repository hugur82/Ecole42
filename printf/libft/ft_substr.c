/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:49:36 by hugur             #+#    #+#             */
/*   Updated: 2022/11/04 12:13:44 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char	*s, unsigned int start, size_t len)
{
	char	*mem;
	size_t	i;

	if (start >= ft_strlen(s) || !(*s) || len == 0)
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	mem = (char *)malloc(sizeof(*mem) * (len) + 1);
	if (mem)
	{
		i = 0;
		while (i < len && s[i + start])
		{
			mem[i] = s[i + start];
			i++;
		}
	mem[i] = '\0';
	}
	return (mem);
}
