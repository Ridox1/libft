/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:15:39 by ramrani           #+#    #+#             */
/*   Updated: 2022/10/22 16:20:32 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] && haystack[i + j] == needle[j] && needle[j] && i
			+ j < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*largestring;
	const char	*smallstring;

	largestring = "Foo Bar Baz";
	smallstring = "r";
	printf("%s\n", strnstr(largestring, smallstring,7));
	printf("%s\n", ft_strnstr(largestring, smallstring,7));
}
*/
