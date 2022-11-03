/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:58:34 by hugur             #+#    #+#             */
/*   Updated: 2022/11/03 15:48:56 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>


void	*ft_memmove(void *dest, const void *src, size_t count)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (s == 0 && d == 0)
		return (0);
	if (d > s)
	{
		while (i < count)
		{
			d[count - i -1] = s[count - i -1];
			i++;
		}
	}
	else
	{
		while (i < count)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
int main (void)
{
	char strd[10]="z23456789";
	char strs[20]="un autre test 0";
		printf("before memmove : -------------> %s \n", strd);
		ft_memmove(strd, strs,10);
		printf(" after memmove : -------------> %s \n", strd);

}*/