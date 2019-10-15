/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:34:11 by jcueille          #+#    #+#             */
/*   Updated: 2019/10/15 18:18:36 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*res;

	res = ft_strdup(s1);
	i = 0;
	j = 0;
	while (set[i] && *res)
	{
		if (set[i] == (char)*res)
		{
			res++;
			i = 0;
			continue ;
		}
		i++;
	}
	if(!(*res))
		return (res);
	while (res[j])
		j++;
	j--;
	i = 0;
	while (set[i])
	{
		if (set[i] == (char)res[j])
		{
			j--;
			i = 0;
			continue ;
		}
		i++;
	}
	res[j + 1] = '\0';
	return (res);
}
/*
int main()
{
	char *str = ft_strtrim("     ", "lo");
	printf("%s", str);
}*/