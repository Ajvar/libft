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

/*struct s_list
{
	void*content;
	struct s_list   *next;
};
*/
/*void ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
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
	while (curr-> next != NULL)
		curr = curr->next;
	return (curr);
}

int ft_lstsize(t_list *lst)
{
	int i;

	i = 1;
	while (lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *curr;

	curr = ft_lstlast(alst);
	curr->next = new;
}*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int i;

	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

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


int main()
{
	char *str = ft_strtrim("    ", " ");
	printf("%s", str);
}
