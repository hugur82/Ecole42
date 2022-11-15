/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlestringinteger.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:31:36 by hugur             #+#    #+#             */
/*   Updated: 2022/11/15 21:38:40 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	ft_printchar(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_printstring(const char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		ft_printchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_printint(int	nb)
{
	char	*str;
	int		strlen;

	str = ft_itoa(nb);
	printf("test str %s",str);
	strlen = ft_printstring(str);
	free(str);

	return (strlen);
}