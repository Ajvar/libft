/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:08:21 by jcueille          #+#    #+#             */
/*   Updated: 2019/10/15 14:15:14 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t k;

	k = 0;
	i = ft_strlen((char *)src);
	j = ft_strlen(dst);
	if (dstsize >= j)
	{
		while (k < dstsize - j - 1 && src[k])
		{
			dst[j + k] = src[k];
			k++;
		}
		dst[j + k] = '\0';
		return (i + j);
	}
	else
		return (i + dstsize);
}
