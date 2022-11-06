/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:19:26 by hugur             #+#    #+#             */
/*   Updated: 2022/11/04 17:48:50 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	findlen(int i)
{
	int	count;

	count = 1;
	if (i < 0)
	{
		count++;
		i *= -1;
	}
	while (i >= 10)
	{
		count++;
		i /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int	len;
	char	*str;
	int	i;
	int	intmin;

	intmin = 0;
	if (n == -2147483648)
		len = 11;
	else
		len = findlen(n);
	str = malloc(sizeof(char) * len + 1);

	if (!str)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			str[len - 1] = '8';
			n = -214748364;
			intmin = 1;
		}
		n *= -1;
		str[i] = '-';
	}
	while(len - i > 0)
	{
		if (str[len - i - 1 - intmin ] == '-')
			break;
		str[len -i -1 - intmin] = (n % 10) + '0'; 
		n /= 10;
		i++;
	}
	str[len] = '\0';
	return(str);
}