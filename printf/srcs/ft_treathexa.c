/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treathexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:24:14 by hugur             #+#    #+#             */
/*   Updated: 2022/11/20 01:19:38 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"

int	ft_hexlen(unsigned int	nb)
{
	int	count;
	
	count = 0;
	while(nb != 0)
	{
		count++;
		nb /= 16;
	}
	return (count);
}

void	ft_printhex(unsigned int	nb, const char	c)
{
	if (nb >= 16)
	{
		ft_printhex((nb / 16), c);
		ft_printhex((nb % 16),c);
	}
	else
	{
		if (nb < 10)
		{
			ft_printchar(nb + '0');
		}
		else 
		{
			if (c == 'x')
				ft_printchar(nb - 10 + 'a');
			else
				ft_printchar(nb - 10 + 'A');

		}
	}
}

int    	ft_treathexa(unsigned int nb,const char c)
{
	if (nb == 0)
		return(write(1,"0",1));
	else
		ft_printhex(nb, c);
	return (ft_hexlen(nb));
}