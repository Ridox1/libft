/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 06:04:45 by ramrani           #+#    #+#             */
/*   Updated: 2022/11/08 16:30:00 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	i;
	int	j;
	int	nw;

	i = 0;
	j = 0;
	nw = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j = 0;
		else if (j == 0)
		{
			j = 1;
			nw++;
		}
		i++;
	}
	return (nw);
}

static void	*free_split(char **split, int k)
{
	int	i;

	i = 0;
	if (split)
	{
		while (i <= k)
		{
			free(split[i]);
			i++;
		}
		free(split);
	}
	return (NULL);
}

static char	**to_split(char *s, char c, char **split)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			k = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			split[j++] = ft_substr(s, k, i - k);
			if (split[j - 1] == NULL)
				return (free_split(split, j - 1));
		}
		else
			i++;
	}
	split[j] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (s == NULL)
		return (NULL);
	split = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (split == 0)
		return (NULL);
	split = to_split((char *)s, c, split);
	if (split == 0)
		return (NULL);
	return (split);
}
