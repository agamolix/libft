/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/02 11:06:29 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{

    if (s == 0)
        return (0);
    char * s2;

    s2 = (char *)s;
    while (s2[0])
        s2++;
    while (s < s2 && s2[0] != c)
        s2--;
    if (s2[0] == c)
        return (s2);
    return (0);
}