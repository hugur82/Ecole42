/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:19:11 by hugur             #+#    #+#             */
/*   Updated: 2022/10/31 21:47:07 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"


size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  lsize;
    size_t  dsize;

    lsize = 0;
    dsize = strlen(dst);
    while (*dst && size > 0 && size--)
    {
        dst++;
        lsize++;
    }
    while (*src && size > 1 && size--)
        *dst++ = *src++;
    if (size == 1)
        *dst = '\0';
    return (dsize + lsize);
}

/* 
int main(void)
{
    char dst[100]="123456";
    char src[]="789012";

    printf("valeur retourné par la fonction strlcat    = %lu, \nvaleur de dst = %s\n", strlcat(dst,src,7), dst);
    printf("valeur retourné par la fonction ft_strlcat = %d, \nvaleur de dst = %s\n", ft_strlcat(dst,src,7), dst);
   
 } */