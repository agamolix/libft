/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/02 11:06:29 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void *str;
    size_t i;

    if (nmemb == 0 || size == 0)
        return (0);
    str = malloc(size * nmemb);
    if (str == 0)
        return (0);
    i = 0;
    while (i < nmemb - 1)
    {
        ((char *)str)[i] = 0;
        i++;
    }
    return (str);
}
