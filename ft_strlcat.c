/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:15:24 by ramrani           #+#    #+#             */
/*   Updated: 2022/11/10 03:18:53 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	len = ft_strlen(dst);
	while (dst[i] != '\0' && i < dstsize)
		i++;
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (dstsize >= len)
		dst[i] = '\0';
	if (dstsize < len)
		return (dstsize + ft_strlen(src));
	else
		return (len + ft_strlen(src));
}
