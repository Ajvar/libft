/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:33:47 by jcueille          #+#    #+#             */
/*   Updated: 2021/12/28 18:25:35 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (src && dst)
	{
		while (n > 0 && n)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			n--;
			i++;
		}
	}
	return (dst);
}
