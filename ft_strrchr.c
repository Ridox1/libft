/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:23:20 by ramrani           #+#    #+#             */
/*   Updated: 2022/10/31 00:10:51 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	if ((char)c == 0)
		return ((char *)s + ft_strlen(s));
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	str[];
	int			ch;

	str[] = "ThAis is AhAmad";
	ch = 'A';
	printf("%s\n", strrchr(str, ch));
	printf("%s\n", ft_strrchr(str, ch));
}
*/
