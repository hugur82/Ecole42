/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:19:11 by hugur             #+#    #+#             */
/*   Updated: 2022/11/02 10:51:26 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"


size_t    ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t len;

    i = ft_strlen(dest);
    j = 0;
    len = ft_strlen(src) + ft_strlen(dest);
    if (size < i)
        return (ft_strlen(src) + size);
    while (src[j] && i < size - 1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = 0;
    if (len < size - 1)
        ft_bzero(dest + len, size - len);
    return (len);


}

