/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isempty.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:35:16 by hugur             #+#    #+#             */
/*   Updated: 2022/11/04 10:54:53 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_isempty(char *str)
{
	size_t	id;

id = 0;
	while (str[id])
	{
		if (!(str[id] == '\t' || str[id] == '\n' || str[id] == '\v'
				|| str[id] == '\f' || str[id] == '\r' || str[id] == ' '
				|| str[id] == '\a'))
			return (0);
		id++;
	}
	return (1);
}
