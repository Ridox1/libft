/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 02:05:58 by ramrani           #+#    #+#             */
/*   Updated: 2022/10/29 21:04:23 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

// int main()
// {
// 	char a[] = "r";
// 	char b[] = "i";
// 	char c[] = "d";
// 	char d[] = "a";
// 	char e[] = "amrani";
// 	t_list *node1 = ft_lstnew(a);
// 	t_list *node2 = ft_lstnew(b);
// 	t_list *node3 = ft_lstnew(c);
// 	t_list *node4 = ft_lstnew(d);
// 	node1 -> next = node2;
// 	node2 -> next = node3;
// 	node3 -> next = node4;
// 	ft_lstadd_front(,e)
// }
