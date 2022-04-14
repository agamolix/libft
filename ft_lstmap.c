/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/08 16:14:27 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *res;

    res = malloc(sizeof(t_list));
    if (res == 0)
        return (0);
    res->content = content;
    res->next = 0;
    return (res);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *temp;
    t_list  *res;

    (void) del;
    if (lst == 0)
        return 0;
    res = ft_lstnew(f(lst->content));
    if (res == 0)
        return (0);
    temp = res;
    lst = lst->next;
    while (lst->next)
    {
        temp->next = ft_lstnew(f(lst->content));
        temp = temp->next;
        lst = lst->next;
    }
    return (res);    
}

