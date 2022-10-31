/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:47:47 by hugur             #+#    #+#             */
/*   Updated: 2022/10/31 19:43:15 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, int n)
{
    int i;

    i = 0;

    if (!dst && !src)
        return (0);
    while (i < n)
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dst);
}
