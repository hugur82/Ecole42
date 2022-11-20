/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 01:32:36 by hugur             #+#    #+#             */
/*   Updated: 2022/11/20 15:53:01 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"

int	ft_ptrlen( unsigned long long ul)
{
	int count;

	count = 1;
	while ( ul >= 16)
	{
		count++;
		ul /= 16;
	}
	return (count);
}

void	ft_recursivhex(unsigned long long ul)
{
	if (ul >= 16)
	{
		ft_recursivhex(ul / 16);
		ft_recursivhex(ul % 16);
	}
	else
	{
		if (ul < 10)
		{
			ft_printchar(ul + '0');
		}
		else
		{
			ft_printchar(ul -10 + 'a');
		}
	}
}

int	ft_printpointer(unsigned long long ul)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	if (ul == 0)
		count += write(1, "0", 1);
	else
	{
		count += ft_ptrlen(ul);
		ft_recursivhex(ul);
	}
	return (count);
}
