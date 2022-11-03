/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:49:36 by hugur             #+#    #+#             */
/*   Updated: 2022/11/03 16:23:25 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char  *s, unsigned int start, size_t len)
{
    char    *mem;
    size_t  mlen;
    size_t  i;

    if (start >= ft_strlen(s) || !(*s) || len == 0)
        return (ft_strdup(""));
    mlen = len;
    if (ft_strlen(s) - start <  len)
        mlen = ft_strlen(s) - start;
    mem = (char *)malloc(sizeof(*mem) * (mlen) + 1);
    if (mem)
    {
        i = 0;
       while (i<len && s[i+start])
       {
        mem[i] = s[i+start];
        i++;
       }
    mem[i] = '\0';
    }
   
    return(mem);
}
