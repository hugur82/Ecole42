/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 21:27:02 by hugur             #+#    #+#             */
/*   Updated: 2022/12/26 18:20:40 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

// int	main(void)
// {
// 	int	fd;
	

// 	fd = open("text", O_RDONLY);
// 	if (fd == -1)
// 	{
// 		ft_putstr("Open() fail");
// 		return (1);
// 	}
	
	
//     printf("%s\n",get_next_line(fd));
//     printf("%s\n",get_next_line(fd));
//     printf("%s\n",get_next_line(fd));
    
   
	
// 	if (close(fd) == -1)
// 	{
// 		ft_putstr("Close() fail");
// 		return (1);
// 	}
// 	return (0);
// }
int    main(void)
{
    int    fd;

    printf("\n\n- - - - - - - next file 1char - - - - - - \n\n");
    fd = open("1char.txt", O_RDONLY);
    for (int i = 0; i < 4; i++)
    {
        printf("\n-- FILE LINES --\n");
        printf("--- Line #%d: ->%s<-\n", i + 1, get_next_line(fd));
    }
    printf("\n\n- - - - - - next file n2: multiple_nlx5 - - - - - -\n\n");
    fd = open("multiple_nlx5", O_RDONLY);
    for (int i = 0; i < 4; i++)
    {
        printf("\n-- FILE LINES --\n");
        printf("--- Line #%d: ->%s<-\n", i + 1, get_next_line(fd));

    }
    printf("\n\n- - - - - - - next file n3: text - - - - - - -\n\n");
    fd = open("text", O_RDONLY);
    for (int i = 0; i < 4; i++)
    {
        printf("\n-- FILE LINES --\n");
        printf("--- Line #%d: ->%s<-\n", i + 1, get_next_line(fd));

    }
    printf("\n\n- - - - - - - next file n4: 1char.txt - - - - - - -\n\n");
    fd = open("1char.txt", O_RDONLY);
    for (int i = 0; i < 4; i++)
    {
        printf("\n-- FILE LINES --\n");
        printf("--- Line #%d: ->%s<-\n", i + 1, get_next_line(fd));

    }
    return (0);
}