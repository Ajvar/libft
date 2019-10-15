/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:00:26 by jcueille          #+#    #+#             */
/*   Updated: 2019/10/15 16:50:26 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;
	unsigned int res;

	res = 0;
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		res = s1[i] - s2[i];
		if (res != 0)
			return (res);
		i++;
	}
	return (0);
}