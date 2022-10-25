/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:34:39 by hugur             #+#    #+#             */
/*   Updated: 2022/10/25 12:18:58 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	main(void)
{
	printf("test si c'est un alphanumerique, et retourne %d\n", isalnum('y'));
	printf("test si c'est un alphanumerique, et retourne %d\n", isalnum('g'));
	printf("test si c'est un alphanumerique, et retourne %d\n", isalnum(1));
	printf("test si c'est un alphanumerique, et retourne %d\n", isalnum('1'));
	printf("test si c'est un alphanumerique, et retourne %d\n", isalnum('4'));
	printf("test si c'est un alphanumerique, et retourne %d\n\n", isalnum('0'));
	printf("test si c'est un alphanumerique, et retourne %d\n", ft_isalnum('y'));
	printf("test si c'est un alphanumerique, et retourne %d\n", ft_isalnum('g'));
	printf("test si c'est un alphanumerique, et retourne %d\n", ft_isalnum(1));
	printf("test si c'est un alphanumerique, et retourne %d\n", ft_isalnum('1'));
	printf("test si c'est un alphanumerique, et retourne %d\n", ft_isalnum('4'));
	printf("test si c'est un alphanumerique, et retourne %d\n", ft_isalnum('0'));
	return (0);
}
