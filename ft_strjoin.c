/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/08 16:14:27 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int    ft_strlen_join(const char *str)
{
    int i;

    if (str == 0)
        return (0);
    i = 0;
    while (str[i])
        i++;
    return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
    char    *res;
    int i; 

    if (s1 == 0 && s2 == 0)
        return (0);
    res = malloc((ft_strlen_join(s1) + ft_strlen_join(s2) + 1) * sizeof(char));
    if (res == 0)
        return 0;
    i = 0;
    while (i < ft_strlen_join(s1))
    {
        res[i] = s1[i];
        i++;
    }
    while(i < ft_strlen_join(s1) + ft_strlen_join(s2))
    {
        res[i] = s2[i - ft_strlen_join(s1)];
        i++; 
    }
    res[i] = 0;
    return (res);
}