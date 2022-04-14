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

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t res;

    res = ft_strlen(dst) + ft_strlen((char *)src);
    if (dst == 0 || src == 0)
        return (res);
    i = ft_strlen(dst);
	j = 0;
    while (i < size - 1 && src[j])
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = 0;
    return (res);
}
