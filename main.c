#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
//#include "libft.h"
typedef struct	s_list t_list; 

size_t	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

void		*ft_calloc(size_t count, size_t size)
{
	int		i;
	void	*res;

	i = 0;
	res = malloc(count * size);
	while (i < (int)count * (int)size)
	{
		*(char*)(res + i) = '\0';
		i++;
	}
	return (res);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		n--;
		i++;
	}
	return (dst);
}

struct s_list
{
	void*content;
	struct s_list   *next;
};

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (new)
		new->next = *alst;
	*alst = new;
}


t_list *ft_lstnew(void *content)
{
	t_list *res;

	if(!(res = malloc(sizeof(t_list))))
		return (NULL);
	res->content = content;
	res->next = NULL;
	return (res);
}


t_list *ft_lstlast(t_list *lst)
{
	t_list *curr;

	curr = lst;
	if (curr)
	{	while (curr-> next != NULL)
			curr = curr->next;
	}
	return (curr);
}

int			ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	if (lst)
	{
		i++;
		while (lst->next != NULL)
		{
			lst = lst->next;
			i++;
		}
	}
	return (i);
}


void ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *curr;

	if (new)
	{
		curr = ft_lstlast(*alst);
		curr->next = new;
	}
}void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *curr;

	curr = lst;
	if (lst && f)
	{
		while (curr->next)
		{
			f(curr->content);
			curr = curr->next;
		}
	}
}

void    ft_modify_list_with_d(void *elem)
{
        int             len;
        char            *content;

        len = 0;
        content = (char *)elem;
        while (content[len])
        {
                content[len++] = 'd';
        }
}

void    ft_print_result(t_list *elem)
{
        int             len;

        while (elem)
        {
                len = 0;
                while (((char *)elem->content)[len])
                        len++;
                write(1, elem->content, len);
                write(1, "\n", 1);
                elem = elem->next;
        }
}

t_list  *ft_lstnewone(void const *content)
{
        t_list  *elem;

        elem = (t_list *)malloc(sizeof(t_list));
        if (!elem)
                return (NULL);
        if (!content)
        {
                elem->content = NULL;
        }
        else
        {
                if (!(elem->content = malloc(sizeof(*(elem->content)) * sizeof(content))))
                        return (NULL);
                elem->content = ft_memcpy(elem->content, content, sizeof(content));
        }
        elem->next = NULL;
        return (elem);
}
void    ft_del(void *content)
{
        free(content);
}

void *f(void* content)
{
	*(char*)content += 2;
	return content;
}

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*maillon;
	t_list	*tmp;
	int		i;

	i = 0;
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
int main()
{
        t_list          *elem;
        t_list          *elem2;
        t_list          *elem3;
        t_list          *elem4;
		t_list			*newish;
        char            str [] = "lorem";
        char            str2 [] = "ipsum";
        char            str3 [] = "dolor";
        char            str4 [] = "sit";

        elem = ft_lstnewone(str);
        elem2 = ft_lstnewone(str2);
        elem3 = ft_lstnewone(str3);
        elem4 = ft_lstnewone(str4);
        alarm(5);
        if (!elem || !elem2 || !elem3 || !elem4)
                return (0);
        elem->next = elem2;
        elem2->next = elem3;
        elem3->next = elem4;
        newish = ft_lstmap(elem, &f, &ft_del);
        ft_print_result(elem);
        ft_print_result(newish);
        return (0);
}