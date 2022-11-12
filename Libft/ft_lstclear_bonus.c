/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:21:51 by hugur             #+#    #+#             */
/*   Updated: 2022/11/12 14:30:11 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*mem;
	t_list	*start;

	if (lst)
	{
		start = *lst;
		while (start)
		{
			mem = start->next;
			(*del)(start->content);
			free(start);
			start = mem;
		}
	*lst = NULL;
	}
}
