/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:39:16 by jcueille          #+#    #+#             */
/*   Updated: 2019/10/15 14:09:09 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*res;

	if (start > ft_strlen(s))
		return (NULL);
	i = 0;
	res = ft_strdup(s);
	res = &res[start];
	res[len + 1] = '\0';
	return (res);
}
