/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:34:39 by hugur             #+#    #+#             */
/*   Updated: 2022/11/20 01:18:09 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"

int ft_format(va_list ap, const char c)
{
	int	length;

	length = 0;
	if (c == 'c')
		length += ft_printchar(va_arg(ap,int));
	else if (c == 's')
		length += ft_printstring(va_arg(ap, const char *));				
	else if (c == 'd' || c == 'i')
		length += ft_printint(va_arg(ap, int));
	else if (c == 'p')
		printf("afficher un pointeur");
		//length += ft_printpointer(va_arg(ap, char *));
		//ft_printpointer;//dois afficher un hexa
	else if (c == 'u')
		length += ft_treatunsigned(va_arg(ap, unsigned int));
	else if (c == 'x' || c == 'X')
		length += ft_treathexa(va_arg(ap, unsigned int),c);
	else if (c == '%')
		length += ft_printchar('%');
	va_end(ap);
	return (length);
}

int	ft_printf(const char *str,...)
{
	int	strcount;
	int	i;
	va_list	ap;

	va_start(ap, str);
	i = 0;
	strcount = 0;
	while(str[i])
	{
		if (str[i] == '%')
		{
			strcount += ft_format(ap,str[i + 1]);
			i++;
		}
		else
			strcount+= ft_printchar(str[i]);
		i++;
	}
	return(strcount);
}
