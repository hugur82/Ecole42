/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:01:22 by hugur             #+#    #+#             */
/*   Updated: 2022/11/03 23:50:10 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("test si c'est un digit, et retourne %d\n", isalpha('y'));
	printf("test si c'est un digit, et retourne %d\n", isalpha('g'));
	printf("test si c'est un digit, et retourne %d\n", isalpha(1));
	printf("test si c'est un digit, et retourne %d\n", isalpha('1'));
	printf("test si c'est un digit, et retourne %d\n", isalpha('4'));
	printf("test si c'est un digit, et retourne %d\n", isalpha('0'));
	printf("test si c'est un digit, et retourne %d\n", ft_isalpha('y'));
	printf("test si c'est un digit, et retourne %d\n", ft_isalpha('g'));
	printf("test si c'est un digit, et retourne %d\n", ft_isalpha(1));
	printf("test si c'est un digit, et retourne %d\n", ft_isalpha('1'));
	printf("test si c'est un digit, et retourne %d\n", ft_isalpha('4'));
	printf("test si c'est un digit, et retourne %d\n", ft_isalpha('0'));
	return (0);
}
*/