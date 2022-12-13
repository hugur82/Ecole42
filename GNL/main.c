/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 21:27:02 by hugur             #+#    #+#             */
/*   Updated: 2022/12/13 22:28:14 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

int	main(void)
{
	int	fd;
	char	*str;

	fd = open("text", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Open() fail");
		return (1);
	}
	str = get_next_line(fd);
    printf("resultat du main : ");
	ft_putstr(str);
	
	if (close(fd) == -1)
	{
		ft_putstr("Close() fail");
		return (1);
	}
	return (0);
}