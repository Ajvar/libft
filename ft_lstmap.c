/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcueille <jcueille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:22:47 by jcueille          #+#    #+#             */
/*   Updated: 2019/10/23 10:51:59 by jcueille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*maillon;
	t_list	*tmp;

	res = NULL;
	while (lst && f && del)
	{
		maillon = ft_lstnew(f(lst->content));
		if (!maillon)
			return(NULL);
		ft_lstadd_back(&res, maillon);
		tmp = lst->next;
		ft_lstdelone(lst, del);
		free(lst);
		lst = tmp;
	}
	return (res);
}
