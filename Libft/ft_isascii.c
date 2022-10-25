/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:19:36 by hugur             #+#    #+#             */
/*   Updated: 2022/10/25 13:19:07 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("test si c'est un ASCII, et retourne %d\n", isascii('y'));
	printf("test si c'est un ASCII, et retourne %d\n", isascii('g'));
	printf("test si c'est un ASCII, et retourne %d\n", isascii(1));
	printf("test si c'est un ASCII, et retourne %d\n", isascii('1'));
	printf("test si c'est un ASCII, et retourne %d\n", isascii('4'));
	printf("test si c'est un ASCII, et retourne %d\n\n", isascii('0'));
	printf("test si c'est un ASCII, et retourne %d\n", ft_isascii('y'));
	printf("test si c'est un ASCII, et retourne %d\n", ft_isascii('g'));
	printf("test si c'est un ASCII, et retourne %d\n", ft_isascii(1));
	printf("test si c'est un ASCII, et retourne %d\n", ft_isascii('1'));
	printf("test si c'est un ASCII, et retourne %d\n", ft_isascii('4'));
	printf("test si c'est un ASCII, et retourne %d\n", ft_isascii('0'));
	return (0);
}
*/