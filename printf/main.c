/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:03:31 by hugur             #+#    #+#             */
/*   Updated: 2022/11/20 01:20:49 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "includes/ft_printf.h"

int main(void)
{
	int len;

	len = 0;
	//len = ft_printf("test string: %s\ntest chaine de caractere: %c\ntest entier : %d \n","hello" ,'A',15005);
	//len += printf("test adress Pointer: %p\n" ,&len);
	//len += ft_printf("test unsigned int: %u \n " , 1592);
	ft_printf("len dans main == %x %x %x %X %X %X\n",156486, 153131591, 54343415, 1734345435,8943228, 3399871433);
	

	return (0);
	
}