/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:37:58 by hugur             #+#    #+#             */
/*   Updated: 2022/10/27 14:06:42 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c);
int ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(const char *str);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_strlcpy(char *dst, char *src, int dstsize);
int ft_atoi(const char *str);
void *ft_memset(void *b, int c, size_t len);
char *ft_strchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, int n);
void ft_bzero(void *s, int n);

#endif
