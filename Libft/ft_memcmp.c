/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:13:45 by hugur             #+#    #+#             */
/*   Updated: 2022/11/01 21:40:47 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    unsigned char *p1;
    unsigned char *p2;

    p1 = (unsigned char*)s1;
    p2 = (unsigned char*)s2;
    i = 0;
    while(i < n)
    {
        if  (p1[i] != p2[i])
            return(p1[i] - p2[i]);
        i++;
    }
    return(0);
}