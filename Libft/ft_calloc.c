/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:29:35 by hugur             #+#    #+#             */
/*   Updated: 2022/11/02 15:48:48 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void  *ptr;

    ptr = malloc(count * size);
    if (!ptr)
        return(NULL);
    ft_bzero(ptr,size * count);
    return(ptr);   
}