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

size_t	ft_strlen_strlcat(char *str)
{
	size_t	i;

	if (str == 0)
        return (0);
    i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strNlen_strlcat(char *str, int n)
{
	size_t	i;

    if (n == 0 || str == 0)
        return (0);
	else
    {
        i = 0;
	    while (i < (size_t)n && str[i])
	        i++;
	    return (i);
    }
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t res;

    res = ft_strNlen_strlcat(dst, size) + ft_strlen_strlcat((char *)src);
    if (dst == 0 || src == 0 || size < ft_strlen_strlcat(dst))
        return (res);
    i = ft_strlen_strlcat(dst);
	j = 0;
    while (i < size - 1 && src[j])
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = 0;
    res = ft_strlen_strlcat(dst) + ft_strlen_strlcat((char *)src);
    return (res);
}
