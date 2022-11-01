/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:15:24 by ramrani           #+#    #+#             */
/*   Updated: 2022/10/31 05:39:34 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(dst);
	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (size != 0 && size >= len)
		dst[i] = '\0';
	if (size < len)
		return (size + ft_strlen(src));
	else
		return (len + ft_strlen(src));
}
/*
int	main(void)
{
    char dest[3];
	char	srcs[];
	long	i;

    srcs[] = "rida";
	i = 9223372036854775807;
    printf("%lu\n", strlcat(dest, srcs, 3));
    printf("%s\n", dest);
//	printf("%d\n", ft_strlcat(dest, srcs, 3));
//	printf("%s\n", dest);
}
*/
