/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 02:07:52 by ramrani           #+#    #+#             */
/*   Updated: 2022/11/09 01:13:39 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	if (new != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
}
