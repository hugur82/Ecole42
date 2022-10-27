/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:19:11 by hugur             #+#    #+#             */
/*   Updated: 2022/10/27 12:22:11 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"


long unsigned ft_strlcat(char *dst, const char *src, long unsigned n)
{
    long unsigned   i;
    long unsigned   j;
    
    i = 0;
    while (dst[i] != 0)
        i++;
    j = 0;
    while (src[j] && n > i + 0)
    {
        dst[i] = src[j];
        i++;
        j++;
        n--;
    }
    dst[i] = '\0';
    
    return(i+n);
}


int main(void)
{
    char dst[100]="123456";
    char src[]="789012";

    printf("valeur retourné par la fonction %lu, \nvaleur de dst = %s\n", strlcat(dst,src,7), dst);
    printf("valeur retourné par la fonction %lu, \nvaleur de dst = %s\n", ft_strlcat(dst,src,7), dst);
   
 }