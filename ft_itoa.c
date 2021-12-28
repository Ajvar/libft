/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:02:40 by jcueille          #+#    #+#             */
/*   Updated: 2021/12/28 18:30:11 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_countdigit(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;

	i = ft_countdigit(n);
	if (n == -2147483648)
		return (ft_memcpy(res = ft_calloc(12, 1), "-2147483648", 12));
	if (n == 0)
		return (ft_memcpy(res = ft_calloc(2, 1), "0", 2));
	res = ft_calloc(i + 1, sizeof(char));
	if (!(res))
		return (NULL);
	if (n < 0)
	{
		*res = '-';
		n *= -1;
	}
	i--;
	while (n > 0)
	{
		res[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (res);
}
