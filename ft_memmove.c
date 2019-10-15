/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:34:13 by jcueille          #+#    #+#             */
/*   Updated: 2019/10/15 14:58:25 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*ssrc[len];

	i = 0;
	while (i < (int)len)
	{
		((char *)ssrc)[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (i < (int)len)
	{
		((char *)dst)[i] = ((char *)ssrc)[i];
		i++;
	}
	return (dst);
}
