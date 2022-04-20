/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:04:33 by atrilles          #+#    #+#             */
/*   Updated: 2022/04/19 16:27:36 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp1;
	t_list	*temp2;

	if (lst == 0)
		return ;
	temp1 = lst[0];
	lst[0] = 0;
	while (temp1)
	{
		temp2 = temp1->next;
		del(temp1);
		free(temp1);
		temp1 = temp2;
	}
}
