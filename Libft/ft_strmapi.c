/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:00:25 by hugur             #+#    #+#             */
/*   Updated: 2022/11/10 20:38:40 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!s || !f || !str)
		return (0);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
