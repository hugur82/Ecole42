/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:34:39 by hugur             #+#    #+#             */
/*   Updated: 2022/11/17 16:33:01 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/libftprintf.h"

/*--------------------------------------*/
/* char *ft_uitoa(unsigned int nb)
{
	char	*str;

	str = malloc();
}

int	ft_unsignedint(unsigned int nb)
{
	char	*str;
	
	if (nb == 0)
	{
		ft_printchar(0);
	}
	else
	{
		str = uitoa(nb);
	}
} */
/*--------------------------------------------*/ 
int ft_format(va_list ap, const char c)
{
	int	length;

	length = 0;
	switch (c)
	{
		case 'c':
			length += ft_printchar(va_arg(ap,int));
			break;
		case 's':
			length += ft_printstring(va_arg(ap, const char *));				
			break;
		case 'd':
			length += ft_printint(va_arg(ap, int));
			break;
		case 'i'://entier base 10
			length += ft_printint(va_arg(ap, int));
			break;
		case 'p':
			//length += ft_printpointer(va_arg(ap, char *));
			//ft_printpointer;//dois afficher un hexa
			break;
		case 'u':
			//length += ft_unsignedint(va_arg(ap, unsigned int));
			break;
		case 'x':
			//ft_printchar;
			break;
		case 'X':
			//ft_printchar;
			break;
		case '%':
			length += ft_printchar('%');
			break;
		default:
			break;
	}
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
