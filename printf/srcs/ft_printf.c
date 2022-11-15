/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:34:39 by hugur             #+#    #+#             */
/*   Updated: 2022/11/15 21:44:37 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "../libft/libft.h"
#include "../includes/libftprintf.h"

/* int	ft_printchar(int c)
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
} */

/* int	ft_printpointer( char *p){
	
	return(ft_printstring(p));
} */
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
			//printf("ceci es un char %s\n",s);
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

int main(void)
{
	int len;

	len = ft_printf("test string: %s\ntest chaine de caractere: %c\ntest entier : %d \n","hello" ,'A',15005);

	ft_printf("\n len dans main == %p !\n","&len");
	

	return (0);
	
}