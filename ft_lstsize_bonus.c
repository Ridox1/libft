/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:51:39 by ramrani           #+#    #+#             */
/*   Updated: 2022/10/29 21:15:21 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
/*
int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	int		s;

	t_list *head = 0;	
	lst1 = ft_lstnew(strdup("1"));
	lst2 = ft_lstnew(strdup("2"));
	lst3 = ft_lstnew(strdup("3"));
	head = lst1;
	lst1->next = lst2;
	lst2->next = lst3;
	s = ft_lstsize(head);
	printf("%d\n",s);
}
*/
/*
	int *a;
	int b = 4;
	t_list *node1 = ft_lstnew(&a);
	int c = *a +1;
	t_list *node2 = ft_lstnew(&c);
	node1 -> next = node2;
	printf("%d",ft_lstsize(node1));
}
*/
