/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:12:21 by ramrani           #+#    #+#             */
/*   Updated: 2022/10/31 01:58:17 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	//char *str;
	i = 0;
	//str = (char *)b;
	while (i < len)
	{
		((char *)b)[i] = c;
		i++;
	}
	return (b);
}

/*
int	main(void)
{
	char	s[];
	int		s2[];

	s[] = "ababab";
	s2[] = {1,2,3,4,5};
	
//	ft_memset(s,321,4);
//	memset(s2,321,4);
//	printf("%d\n",s[0]);
//	printf("%d",s2[0]);
	printf("%s \n ",memcpy(s + 1, s,3));
}
*/
