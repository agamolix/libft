/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/08 16:14:27 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"


int    ft_suppchar(char c, char const *set)
{
    while (set[0])
    {
        if (c == set[0])
            return (1);
        set++;
    }
    return (0);
}

int    ft_strlen_trim(char const *str)
{
    int i;

    if (str == 0)
        return (0);
    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_res(char *res, char const *s1, int start, int end)
{
    int     i;

    i = 0;
    while (start < end)
    {
        res[i] = s1[start];
        start++;
        i++;
    }
    res[i] = 0;
    return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
    char *res;
    int start; 
    int end;

    start = 0;
	if (s1 == 0 || set == 0)
		return (0);
	while (s1[start] && ft_suppchar(s1[start], set))
		start++;
    end = ft_strlen_trim(s1);
    while (end > start && s1[end - 1] && ft_suppchar(s1[end - 1], set))
        end--;
    res = malloc((end - start + 1) * sizeof(char));
    if (res == 0)
        return 0;
    return (ft_res(res, s1, start, end));
}