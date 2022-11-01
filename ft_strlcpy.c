/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:39:04 by ramrani           #+#    #+#             */
/*   Updated: 2022/10/31 00:25:18 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if(dstsize)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
int	main(void)
{
	char dest[3];
	char srcs[] = "rida";
	printf("%lu\n", strlcpy(dest, srcs, 3));
	printf("%s\n", dest);
	printf("%d\n", ft_strlcpy(dest, srcs, 3));
	printf("%s\n", dest);

}*/
