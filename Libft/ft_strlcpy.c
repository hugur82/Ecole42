/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:34:50 by hugur             #+#    #+#             */
/*   Updated: 2022/10/27 09:40:05 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlcpy(char *dst, char *src, int dstsize)
{
    int i;
    int j;

    j = 0;
    while(src[j])
        j++;
    if (dstsize <= 0)
        return (j);
    i = 0;    
    while ((src[i] != 0) && (i < dstsize - 1))
    {
        dst[i] = src[i];
        i++; 
    }
    dst[i] = '\0';
    return (j);
}
/*
int main(void)
{
char dest[15];
char src[15]="bonjour";

printf("voici le resultat %d", ft_strlcopy(dest,src,4));
}*/
