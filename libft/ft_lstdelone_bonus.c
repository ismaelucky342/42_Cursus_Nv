
#include "libft.h"

void	ft_lstdelone(t_list *list, void (*del)(void *))
{
	if (list && del)
	{
		del(list->content);
		free(list);
	}
}
