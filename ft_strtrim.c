/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:38:38 by ramrani           #+#    #+#             */
/*   Updated: 2022/10/31 23:13:27 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (s1[j] && ft_strchr(set, s1[j]) != 0)
		j++;
	k = ft_strlen(s1);
	while (k > j && ft_strchr(set, s1[k - 1]) != 0)
		k--;
	str = (char *)malloc(sizeof(*s1) * (k - j + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (j < k)
		str[i++] = s1[j++];
	str[i] = 0;
	return (str);
}
