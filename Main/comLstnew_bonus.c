#include "comprobacion.h"

void comLstnew_bonus(void)
{
    int content = 98;
    t_list *ls;

    ls = NULL;
    printf("DIR: %p\n", ls);
    ls = ft_lstnew(&content);
    printf("DIR: %p\n", ls);
    printf("ls: %s", ls->content);
    return (0);
}