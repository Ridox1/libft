/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:24:28 by ramrani           #+#    #+#             */
/*   Updated: 2022/10/22 16:57:32 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*buffer;

	buffer = (char *)malloc(count * size);
	if (buffer == 0)
		return (NULL);
	bzero(buffer, count * size);
	return (buffer);
}
