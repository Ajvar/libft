/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:58:08 by jcueille          #+#    #+#             */
/*   Updated: 2019/10/15 11:34:30 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		if (*(char *)(src + i) == (unsigned char)c)
			return (dst + (i + 1));
		n--;
		i++;
	}
	return (NULL);
}
