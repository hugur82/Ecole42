/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:45:14 by hugur             #+#    #+#             */
/*   Updated: 2022/11/01 22:15:43 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t size_little;
    int notempty;
    
    notempty = 0;
    size_little = ft_strlen(little);
    i = 0;
    while (i < size_little && !notempty)
    {
        if (ft_isblank(little[i]))
            notempty = 1;
        i++;
    }
    if (!notempty)
        return (big);
    
    
}
