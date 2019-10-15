/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:47:20 by jcueille          #+#    #+#             */
/*   Updated: 2019/10/15 11:46:19 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char		*ft_strdup(const char *s1)
{
	char	*res;
	int		i;

	i = 0;
	if (!(res = malloc(ft_strlen(s1) + 1)))
	{
		return (NULL);
	}
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
