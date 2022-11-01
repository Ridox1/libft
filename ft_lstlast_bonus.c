/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 00:03:30 by ramrani           #+#    #+#             */
/*   Updated: 2022/11/01 02:44:54 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL)
		return (0);
	tmp = lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*last;

	head = 0;
	lst1 = ft_lstnew(strdup("1"));
	lst2 = ft_lstnew(strdup("2"));
	lst3 = ft_lstnew(strdup("3"));
	head = lst1;
	lst1 -> next = lst2;
	lst2 -> next = lst3;
	last = ft_lstlast(head);
	printf("%s\n",last -> content);
	printf("%p\n", last -> next);
}
*/
