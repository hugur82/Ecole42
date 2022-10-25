/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:03:27 by hugur             #+#    #+#             */
/*   Updated: 2022/10/25 16:22:44 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        c -= 32;
    return c;
}
/*
int main(void)
{
    printf("test si ca marche %c \n", ft_toupper('a'));
    printf("test si ca marche %c \n", ft_toupper('A'));
    printf("test si ca marche %c \n", ft_toupper('e'));
    printf("test si ca marche %c \n", ft_toupper('z'));
    printf("test si ca marche %c \n", ft_toupper('Z'));
    printf("test si ca marche %c \n", ft_toupper('a'));
    printf("test si ca marche %c \n", ft_toupper('1'));
    printf("test si ca marche %c \n", ft_toupper(' '));
    printf("test si ca marche %c \n", ft_toupper('a'));
    printf("test si ca marche %c \n", ft_toupper('a'));
    printf("test si ca marche %c \n", ft_toupper('@'));
    printf("test si ca marche %c \n", ft_toupper('a'));
    
}*/