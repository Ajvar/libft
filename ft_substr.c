/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:39:16 by jcueille          #+#    #+#             */
/*   Updated: 2021/12/28 18:21:50 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	s_len;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	res = (char *)ft_calloc(len + 1, sizeof(*res));
	if (res == NULL)
		return (NULL);
	if (start < s_len)
		while (i < len && s[start])
			res[i++] = s[start++];
	return (res);
}
