/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:19:00 by ramrani           #+#    #+#             */
/*   Updated: 2022/11/10 05:23:27 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	if (!dst && !src)
		return (NULL);
	str1 = (char *)src;
	str2 = (char *)dst;
	if (str2 > str1)
	{
		while (i < len)
		{
			str2[len - 1] = str1[len - 1];
			len--;
		}
	}
	else if (str2 < str1)
		ft_memcpy(str2, str1, len);
	return (str2);
}
