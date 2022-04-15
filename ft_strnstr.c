/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/02 11:06:29 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_valid(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		if (s2[i] != s1[i])
			return (0);
		i++;
	}
	return (1);
}

char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    int valid; 

    if (s2[0] == 0)
        return ((char *)s1);
    else
    {
	    while (s1[0] && n)
	    {
			n--;
            if (s1[0] == s2[0])
            {
                valid = ft_valid((char *)s1, (char *)s2);
                if (valid == 1)
                    return ((char *)s1);
            }
            s1++;
		    n--;
	    }
    }
	return (0);
}

