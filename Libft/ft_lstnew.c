/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:46:08 by hugur             #+#    #+#             */
/*   Updated: 2022/11/08 22:23:10 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list  *tmp;

    tmp = malloc(sizeof(t_list));
    if (tmp)
    {
        tmp->content = content;
        tmp->next = NULL;
   }
   return(tmp);
}
