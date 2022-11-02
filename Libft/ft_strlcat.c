/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:19:11 by hugur             #+#    #+#             */
/*   Updated: 2022/11/01 15:20:06 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/* size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	j;
	size_t	lenreturn;

	d = ft_strlen(dst);
	lenreturn = ft_strlen(dst) + ft_strlen(src);
	if(size < d)
		return(ft_strlen(src) + size);
	j = 0;
	while(src[j] && d < size - 1)
	{
		dst[d] = src[j];
		d++;
		j++;
	}
	dst[d] = '\0';
	if(lenreturn < size - 1 )
		ft_bzero(dst + lenreturn ,size - lenreturn);
	return (lenreturn);
} */

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


/* 
int main(void)
{
	char dst[100]="123456";
	char src[]="789012";

	printf("valeur retourné par la fonction strlcat    = %lu, \nvaleur de dst = %s\n", strlcat(dst,src,7), dst);
	printf("valeur retourné par la fonction ft_strlcat = %d, \nvaleur de dst = %s\n", ft_strlcat(dst,src,7), dst);
   
 } */
