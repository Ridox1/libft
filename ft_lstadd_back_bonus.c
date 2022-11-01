/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 02:07:52 by ramrani           #+#    #+#             */
/*   Updated: 2022/11/01 02:45:07 by ramrani          ###   ########.fr       */
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
// int main()
// {
// 	t_list *head = 0;
// 	t_list *lst1 = ft_lstnew(strdup("1"));
// 	t_list *lst2 = ft_lstnew(strdup("2"));
// 	t_list *lst3 = ft_lstnew(strdup("3"));
// 	head = lst1;
// 	lst1->next = lst2;
// 	lst2->next = lst3;
// }
