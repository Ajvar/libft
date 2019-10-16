/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:02:40 by jcueille          #+#    #+#             */
/*   Updated: 2019/10/16 16:35:10 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_countdigit(int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int		ft_itoabis(int *n, int *div, int sign)
{
	if (*n < 0)
	{
		sign++;
		*n *= -1;
	}
	while (*div > *n)
		*div /= 10;
	return (sign);
}


char	*ft_itoa(int n)
{
	char	*res;
	int		div;
	int		i;
	int		sign;

	sign = 0;
	i = 0;
	div = 1000000000;
	if (n == -2147483648)
		return ("-2147483648");
	sign = ft_itoabis(&n, &div, sign);
	res = malloc(ft_countdigit(n));
	if (sign > 0)
		res[i++] = '-';
	while (n > 0)
	{
		res[i] = ((n / div) + 48);
		i++;
		n /= 10;
	}
	return (res);
}