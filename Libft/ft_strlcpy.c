/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:34:50 by hugur             #+#    #+#             */
/*   Updated: 2022/10/31 19:34:29 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcpy(char *dst, char *src, int dstsize)
{
    int i;
       
    if (dstsize == 0)
        return (ft_strlen(src));
    i = 0;    
    while ((src[i] != 0) && (i < dstsize - 1))
    {
        dst[i] = src[i];
        i++; 
    }
    dst[i] = '\0';
    return (i);
}
/*
int main(void)
{
char dest[15];
char src[15]="bonjour";

printf("voici le resultat %d", ft_strlcopy(dest,src,4));
}*/
