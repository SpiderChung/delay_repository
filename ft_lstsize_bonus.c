#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;
    t_list  temp;

    i = 0;
    temp = lst;
    if (temp)
    {
        while (temp)
        {
            i++;
            temp = temp->next;
        }
    }
    return (i);
}