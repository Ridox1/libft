/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:38:38 by ramrani           #+#    #+#             */
/*   Updated: 2022/11/08 17:15:22 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[j] && ft_strchr(set, s1[j]) != 0)
		j++;
	k = ft_strlen(s1);
	while (k > j && ft_strchr(set, s1[k - 1]) != 0)
		k--;
	str = (char *)malloc(sizeof(char) * (k - j + 1));
	if (str == NULL)
		return (NULL);
	while (j < k)
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
