/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:03:31 by hugur             #+#    #+#             */
/*   Updated: 2022/11/17 22:39:01 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "includes/ft_printf.h"

int main(void)
{
	int len;

	len = ft_printf("test string: %s\ntest chaine de caractere: %c\ntest entier : %d \n","hello" ,'A',15005);
	len += printf("test adress Pointer: %p\n" ,&len);
	len += ft_printf("test unsigned int: %u\n " , 152);

	ft_printf("\n len dans main == %i !\n",len);
	

	return (0);
	
}