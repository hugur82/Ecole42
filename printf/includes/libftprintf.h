#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
int	ft_printchar(int c);
int	ft_printstring(const char *str);
int	ft_printint(int	nb);
int	ft_printf(const char *str,...);
int ft_format(va_list ap, const char c);
#endif