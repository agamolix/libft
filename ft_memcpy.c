/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:08:46 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/01 15:39:09 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
    int i;

    if (dest == 0 || src == 0)
        return (0);
    i = 0;
	while (n)
    {
        ((char *)dest)[i] = ((char *)src)[i];
        i++;
        n--;
    }
	return (dest);
}
