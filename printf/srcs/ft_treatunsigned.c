/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:57:45 by hugur             #+#    #+#             */
/*   Updated: 2022/11/17 22:47:27 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"

int		ft_uitoalen(unsigned int nb)
{
	int		mem;

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
	char			*s;
	int				len;

	len = ft_uitoalen(nb);
	printf("len uitoa = %d", len);
	s = malloc(sizeof(char) * len + 1);
	if (!s)
		return(NULL);
	while (len-- > 0)
	{
		s[len] = nb % 10;
		nb /= 10;
	}
	return(s);
}

int		ft_treatunsigned(unsigned int	ui)
{
	char	*str;
	
	str = ft_uitoa(ui);

	free(str);
	return(0);
}