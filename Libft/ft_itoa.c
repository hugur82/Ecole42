/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:12:40 by hugur             #+#    #+#             */
/*   Updated: 2022/11/09 20:21:48 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int countlen(long int li)
{
	int count;

	count = 0;
	if (li == 0)
		return(1);
	if (li < 0)
	{
		count = 1;
		li *= -1;
	}
	while(li != 0 )
	{
		count++;
		li /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int  len;
	long int    li ;
	char    *str;
	int isneg;

	isneg = 0;
	li = (long int)n;
	len = countlen(li);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (li < 0)
	{
		isneg = 1;
		li *= -1;
		str[0] = '-';
	}
	while ((len > 0 && !isneg) || (isneg && len > 1))
	{ 
		str[len - 1] = (li % 10) + '0';
		li /= 10;
		len--;
	}
	return (str);
}