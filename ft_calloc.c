/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:24:28 by ramrani           #+#    #+#             */
/*   Updated: 2022/11/10 08:02:42 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*buffer;

	if ((size != 0) && (count >= SIZE_MAX / size))
		return (NULL);
	buffer = (char *)malloc(count * size);
	if (buffer == 0)
		return (NULL);
	ft_bzero(buffer, count * size);
	return (buffer);
}
