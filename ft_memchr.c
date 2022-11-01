/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 03:31:49 by ramrani           #+#    #+#             */
/*   Updated: 2022/10/31 02:11:00 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	str[];
	const char	ch;
	char		*ret;
	char		*retu;

	str[] = "http://www.tutorialspoint.com";
	ch = 'w';
	ret = memchr(str, ch, 8);
	retu = ft_memchr(str, ch, 8);
	printf("String after '%c' is '%s'\n", ch , ret);
	printf("String after '%c' is '%s'\n", ch , retu);
}
*/
