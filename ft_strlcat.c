/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:08:46 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/01 15:39:09 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t len_dst;

    len_dst = ft_strlen(dst);
    if (size <= len_dst)
        return (size + ft_strlen((char *)src));
    i = len_dst;
	j = 0;
    while (src[j] && i < size - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = 0;
    return (len_dst + ft_strlen((char *)src));
}
