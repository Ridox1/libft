/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:26:22 by ramrani           #+#    #+#             */
/*   Updated: 2022/10/30 23:51:34 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while ((char *)s && i < len)
	{
		str[i] = ((char *)s)[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
// //	char s1[] = "rida amrani";
// 	printf ("%s",ft_substr(NULL, 8, 3));
// }

/*
1- if start > len(s)
2- if len < there is not enought space for '\0' example:
   ft_substr(s1, 8, 3) and s1[] = "rida amrani";
   no problem on the display
3- if s == NULL return NULL ??? 
*/
