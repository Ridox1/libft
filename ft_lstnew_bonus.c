/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:21:11 by ramrani           #+#    #+#             */
/*   Updated: 2022/10/29 22:21:34 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (head == NULL)
		return (NULL);
	head->next = NULL;
	head->content = content;
	return (head);
}
/*
int	main(void)
{
	int	*b;
    t_list *new_node;

//  char a[] = "rida";
//	int a = 4;
	b = malloc(sizeof(int));
	*b = 4;
    new_node = ft_lstnew(b);
	printf("%s\n", new_node -> content);
}
 problem with integer content*/
