/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:57:45 by hugur             #+#    #+#             */
/*   Updated: 2022/11/19 15:43:20 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"

int		ft_uitoalen(unsigned int nb)
{
	int		mem;

	mem = 0;
	if (nb == 0)
		mem = 1;
	else
	{
		while (nb > 0)
		{
			mem++;
			nb /= 10;
		}
	}
	return (mem);
}

char	*ft_uitoa(unsigned int	nb)
{
	char			*str;
	int				len;

	len = ft_uitoalen(nb);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return(NULL);
	while (len-- > 0)
	{
		str[len] = nb % 10 + '0';
		nb /= 10;
	}
	return(str);
}

int		ft_treatunsigned(unsigned int	ui)
{
	char	*str;
	int		nb;

	str = ft_uitoa(ui);
	if (!str)
		return(0);
	nb = ft_printstring(str);
	free(str);
	return(nb);
}