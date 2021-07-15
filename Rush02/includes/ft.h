#ifndef FT_H
# define FT_H

typedef struct s_btree
{
    struct s_btree    *left;
    struct s_btree    *right;
    void            *number;
    void            *word;
}    t_btree;

#endif
