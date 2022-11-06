/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:04:31 by hugur             #+#    #+#             */
/*   Updated: 2022/11/06 17:25:18 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    printf("\n");
    printf("Resultat de mon Main:\n");
    ft_split("Salut mon al gars ça vala bien" ,'a');
    ft_split("! Salut \t mon gars ça va bien" ,' ');
    ft_split("Salut mon gars \t \n ça va bien" ,'\t');
    printf("\n");
    return (0);
}