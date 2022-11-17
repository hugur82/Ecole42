/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:03:31 by hugur             #+#    #+#             */
/*   Updated: 2022/11/17 16:39:12 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "includes/libftprintf.h"

int main(void)
{
	int len;

	len = ft_printf("test string: %s\ntest chaine de caractere: %c\ntest entier : %d \n","hello" ,'A',15005);
	len += printf("test adress Pointer: %p\n test adresse en entier %li" ,&len, &len);

	ft_printf("\n len dans main == %i !\n",len);
	

	return (0);
	
}