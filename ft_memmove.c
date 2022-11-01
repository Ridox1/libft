/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:19:00 by ramrani           #+#    #+#             */
/*   Updated: 2022/10/30 22:24:08 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	if (!dst && !src)
		return NULL;
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
	else
	{
		while (i < len)
		{
			str2[i] = str1[i];
			i++;
		}
	}
	return (str2);
	// return (dst);
}
// int main()
// {
// 	char s[] = "rida";
// 	char ss[] = "rida";
// //	char d[5] = "1337";
// //	char dd[5] = "1337";
// 	memmove(s, s+2, 2);
// 	ft_memmove(ss, ss+2, 2);
// 	printf("%s\n", s);
// 	printf("%s\n", ss);
// }
