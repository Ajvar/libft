/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:32:20 by jcueille          #+#    #+#             */
/*   Updated: 2021/12/28 18:20:01 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	if (!(*needle))
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && len > i)
	{
		j = 0;
		while (haystack[i] == needle[j] && needle[j])
		{
			j++;
			i++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + (i - j));
		i++;
		len--;
	}
	return (NULL);
}
