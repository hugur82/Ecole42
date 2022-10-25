/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:01:54 by hugur             #+#    #+#             */
/*   Updated: 2022/10/25 12:07:38 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("test si c'est un digit, et retourne %d\n", isdigit('y'));
	printf("test si c'est un digit, et retourne %d\n", isdigit('g'));
	printf("test si c'est un digit, et retourne %d\n", isdigit(1));
	printf("test si c'est un digit, et retourne %d\n", isdigit('1'));
	printf("test si c'est un digit, et retourne %d\n", isdigit('4'));
	printf("test si c'est un digit, et retourne %d\n", isdigit('0'));
	printf("test si c'est un digit, et retourne %d\n", ft_isdigit('y'));
	printf("test si c'est un digit, et retourne %d\n", ft_isdigit('g'));
	printf("test si c'est un digit, et retourne %d\n", ft_isdigit(1));
	printf("test si c'est un digit, et retourne %d\n", ft_isdigit('1'));
	printf("test si c'est un digit, et retourne %d\n", ft_isdigit('4'));
	printf("test si c'est un digit, et retourne %d\n", ft_isdigit('0'));
	return (0);
}
*/