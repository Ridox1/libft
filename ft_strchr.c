/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:42:54 by ramrani           #+#    #+#             */
/*   Updated: 2022/10/31 00:13:42 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == 0)
		return ((char *)s + i);
	return (0);
}
/*
int	main(void)
{
	const char	str[];
	int			ch;

    str[] = "This is a";
	ch = 105;
    printf("string starting from \"%c\" est: %s\n", ch, ft_strchr(str, ch));
    printf("string starting from \"%c\" est: %s\n", ch, strchr(str, ch));
}
*/
