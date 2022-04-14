/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/08 16:14:27 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int count(int n)
{
    int i;

    i = 1;
    while (n / 10 > 0)
    {
        i++;
        n = n / 10;
    }
    return (i);
}

char    *ft_pos(int n)
{
    char    *res;
    int     i; 

    res = malloc((count(n) + 1) * sizeof(char));
    i = count(n) - 1;
    while (i >= 0)
    {
        res[i] = n % 10 + '0';
        n = n / 10;
        i--;
    }
    return (res);
}

char    *ft_neg(int n)
{
    char    *res;
    int     i; 

    res = malloc((count(n) + 1) * sizeof(char));
    i = count(n);
    while (i > 0)
    {
        res[i] = n % 10 + '0';
        n = n / 10;
        i--;
    }
    res[0] = '-';
    return (res);
}
char	*ft_itoa(int n)
{
    int sign;

    if (n == 0)
        return ("0");
    sign = 1;
    if (n < 0)
        sign = -1;
    n = n * sign;
    if (sign == 1)
        return (ft_pos(n));
    else
        return (ft_neg(n));
}
