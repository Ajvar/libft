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

void	ft_fill(char *s, char c, char **res)
{
	int i;
	int x;
	int l;

	x = 0;
	i = 0;
	l = 0;
	while (*s)
	{
		i = 0;
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			res[l][i] = *s;
			s++;
			i++;
		}
		res[l][i] = '\0';
		l++;
	}
}

void	ft_countchar(char *s, char c, char **res)
{
	int x;

	while (*s)
	{
		x = 0;
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			s++;
			x++;
		}
		*res = malloc(x + 1);
		res++;
	}
}

int		ft_countword(char *s, char c)
{
	int i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		i++;
		while (*s != c && *s)
			s++;
	}
	return (i);
}

char	**ft_split(char *s, char c)
{
	char **res;
	char i;

	i = 0;
	res = malloc(sizeof(*res) * ft_countword(s, c) + 1);
	ft_countchar(s, c, res);
	ft_fill(s, c, res);
	return (res);
}

int ft_countdigit(int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	char *res;
	int div;
	int i;
	int sign;

	sign = 0;
	i = 0;
	div = 1000000000;
	if (n == -2147483648)
	{
		return ("-2147483648");
	}
		if (n < 0)
	{
		sign++;
		n *= -1;
	}
	while (div > n)
		div /= 10;
	res = malloc(ft_countdigit(n));
	if (sign > 0)
	{	
		res[i] = '-';
		i++;
	}
	while (n > 0)
	{
		res[i] = ((n / div) + 48 );
		i++;
		n /= 10;
	}
	return (res);
}

int main()
{
printf("%s", ft_itoa(-2147483648));
}