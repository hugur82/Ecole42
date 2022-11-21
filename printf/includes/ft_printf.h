/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:40:11 by hugur             #+#    #+#             */
/*   Updated: 2022/11/21 17:42:49 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printchar(int c);
int	ft_printstring(const char *str);
int	ft_printint(int nb);
int	ft_printf(const char *str, ...);
int	ft_format(va_list ap, const char c);
int	ft_treatunsigned(unsigned int ui);
int	ft_treathexa(unsigned int nb, const char c);
int	ft_printpointer(unsigned long long ul);
#endif