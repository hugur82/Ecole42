/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:34:50 by hugur             #+#    #+#             */
/*   Updated: 2022/10/25 16:13:05 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* PAS FINI */
#include <stdio.h>

size_t strlcopy(char *dst, char *src, size_t dstsize)
{
    int i;

    i = 0;    
    while ((src[i] != 0) && (i < dstsize))
    {
        dst[i] = src[i];
        i++; 
    }
    dst[i] = '\0';
    return (dst);
}

int main(void)
{
char dest[15];
char src[15]="bonjour";

printf("voici le resultat %d", strlcopy(dest,src,3));
}