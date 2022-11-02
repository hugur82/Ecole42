/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:38:49 by hugur             #+#    #+#             */
/*   Updated: 2022/11/02 11:19:08 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *mem;

    mem = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (mem[i] == (unsigned char)c)
            return (&mem[i]);
        i++;
    }
    return (NULL);
}