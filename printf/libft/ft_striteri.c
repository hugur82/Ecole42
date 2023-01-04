/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:39:33 by hugur             #+#    #+#             */
/*   Updated: 2022/11/11 00:30:06 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	len;

	i = 0;
	if (s != NULL && f != NULL)
	{
		len = ft_strlen(s);
		while (i < len)
		{
			f(i, s);
			s++;
			i++;
		}
	}
}
