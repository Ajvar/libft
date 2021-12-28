/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:34:07 by jcueille          #+#    #+#             */
/*   Updated: 2021/12/28 18:22:08 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while ((int)len > i)
	{
		*(char *)b = (unsigned char)c;
		i++;
		b++;
	}
	return (b - i);
}
