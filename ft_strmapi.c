/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/08 16:14:27 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int     len;
    char    *res;
    int i;

    if (s == 0 || f == 0)
        return 0;
    len = 0;
    while (s[len])
        len++;
    res = malloc(len * sizeof(char));
    if (res == 0)
        return (0);
    i = 0;
    while (i < len)
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = 0;
    return (res);
}
