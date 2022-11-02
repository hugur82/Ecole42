/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:34:50 by hugur             #+#    #+#             */
/*   Updated: 2022/11/02 19:31:20 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, char *src, size_t dstsize)
{
    size_t i;
       
    if (dstsize == 0 || !dst)
        return (ft_strlen(src));
    i = 0;    
    while ((src[i] != 0) && (i < dstsize - 1))
    {
        dst[i] = src[i];
        i++; 
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}
/*
int main(void)
{
char dest[15];
char src[15]="bonjour";

printf("voici le resultat %d", ft_strlcopy(dest,src,4));
}*/
