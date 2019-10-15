/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:01:51 by jcueille          #+#    #+#             */
/*   Updated: 2019/10/07 18:13:35 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if ((unsigned char)c == *(unsigned char*)s)
			return ((void*)s);
		n--;
		s++;
	}
	return (NULL);
}
