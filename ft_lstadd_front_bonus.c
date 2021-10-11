#include "libft.h"

void ft_ltsadd_front(t_list **lst, t_list *new)
{
    if (lst && new)
    {
        new->next = *lst;
        *lst = new;
    }

}


