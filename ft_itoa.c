/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramrani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 05:45:25 by ramrani           #+#    #+#             */
/*   Updated: 2022/11/08 01:33:01 by ramrani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*n_to_array(char *ar, int n, int count)
{
	if (n < 0)
	{
		n *= -1;
		ar[count + 1] = '\0';
		ar[0] = '-';
		while (count > 0)
		{
			ar[count] = (n % 10) + 48;
			count--;
			n = n / 10;
		}
	}
	else
	{
		ar[count] = '\0';
		count -= 1;
		while (count >= 0)
		{
			ar[count] = (n % 10) + 48;
			count--;
			n = n / 10;
		}
	}
	return (ar);
}

char	*ft_itoa(int n)
{
	char	*to_int;
	int		count;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		count = count_digit(n * -1) + 1;
	else
		count = count_digit(n);
	to_int = (char *)malloc((count + 1) * sizeof(char));
	if (to_int == NULL)
		return (NULL);
	if (n < 0)
		n_to_array(to_int, n, count - 1);
	else
		n_to_array(to_int, n, count);
	return (to_int);
}
