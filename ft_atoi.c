/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:24:12 by ramrani           #+#    #+#             */
/*   Updated: 2022/10/31 03:20:49 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	long nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if(nb * 10 + (str[i] - 48) < nb)
		{
			if( sign == -1)
				return 0;
			else
				return -1;
		}
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * sign);
}
/*
int	main(void)
{
	char	a[];

	a[] = "-9223372036854775809";
//	char a[] = "9223372036854775807";
	printf("%d\n", atoi(a));
 	printf("%d", ft_atoi(a));
}
*/
