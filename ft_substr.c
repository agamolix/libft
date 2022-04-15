/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/08 16:14:27 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char    *emptystr()
{
    char    *res;

    res = malloc(sizeof(char));
    res[0] = 0;
    return res;
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *res;
    int i;

    i = 0;
    if (s == 0)
        return (0);
    if (start > ft_strlen((char *)s))
        return (emptystr());
    if (len > ft_strlen((char *)s) - start)
        res = malloc((ft_strlen((char *)s) - start + 1) * sizeof(char));
    else
        res = malloc((len + 1) * sizeof(char));
    if (res == 0)
        return 0;
    while (s[start + i] && i < (int)len)
    {
        res[i] = s[start + i];
        i++;
    }
    res[i] = 0;
    return (res);
}
