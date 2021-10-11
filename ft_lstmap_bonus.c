#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *temp;
    t_list *dest;

    if (!f || !del)
        return (NULL);
    dest = NULL;
    while (lst)
    {
        temp = ft_lstnew(f(lst->content));
        if (!temp)
        {
            ft_lstclear(&dest, del);
            return (NULL);
        }
        ft_lstadd_back(&dest, temp);
        lst = lst->next;
    }
    return (dest);
}

