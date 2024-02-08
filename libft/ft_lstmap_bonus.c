/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:07:38 by rde-migu          #+#    #+#             */
/*   Updated: 2024/02/08 20:41:38 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

t_list *create_new_node(void *content)
{
    t_list *new_node = malloc(sizeof(t_list));
    if (!new_node)
        return NULL;
    new_node->content = content;
    new_node->next = NULL;
    return new_node;
}

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%p ", lst->content);
        lst = lst->next;
    }
    printf("\n");
}

void *map_function(void *content)
{
    int *value = (int *)content;
    int *new_value = malloc(sizeof(int));
    if (!new_value)
        return NULL;
    *new_value = *value * 2;
    return new_value;
}

void free_int(void *content)
{
    free(content);
}

int main(void)
{
    t_list *lst = NULL;

    int content1 = 10;
    int content2 = 20;
    int content3 = 30;

    t_list *node1 = create_new_node(&content1);
    t_list *node2 = create_new_node(&content2);
    t_list *node3 = create_new_node(&content3);

    node1->next = node2;
    node2->next = node3;
    lst = node1;

    printf("Lista original: ");
    print_list(lst);

    t_list *mapped_list = ft_lstmap(lst, &map_function, &free_int);

    printf("Lista resultante después del mapeo: ");
    print_list(mapped_list);

    while (lst)
    {
        t_list *temp = lst;
        lst = lst->next;
        free(temp->content);
        free(temp);
    }

    while (mapped_list)
    {
        t_list *temp = mapped_list;
        mapped_list = mapped_list->next;
        free(temp->content);
        free(temp);
    }

    return 0;
}