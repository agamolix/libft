/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/08 16:14:27 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char const *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return len;
}

char    *line(char const *str, char c)
{
    char *temp;
    int len; 
    int i; 

    len = 0;
    while (str[len] && str[len] != c)
        len++;
    temp = malloc((len + 1) * sizeof(char));
    i = 0;
    while (i < len)
    {
        temp[i] = str[i];
        i++;
    }
    temp[i] = 0;
    return (temp);
}

const char    *forward(char const *str, char c)
{
    while (str[0] && str[0] == c)
        str++;
    return (str);
}

int     count(char const *str, char c)
{
    char const *temp;
    int i;
    
    temp = malloc((ft_strlen(str) + 1) * sizeof(char));
    temp = forward(str, c);

    while (temp[0])
    {
        i++;
        temp = temp + ft_strlen(line(temp, c));
        temp = forward(temp, c);
    }   
    return i;
}

char	**ft_split(char const *s, char c)
{
    char const   **res;
    int i; 
    char const  *temp;
    
    res = malloc((count(s, c) + 1) * sizeof(char *));
    i = 0;
    temp = malloc((ft_strlen(s) + 1) * sizeof(char));
    temp = forward(s, c);

    while (temp[0])
    {
        res[i] = malloc((ft_strlen(line(temp, c)) + 1) * sizeof(char));
        res[i] = line(temp, c);
        temp = temp + ft_strlen(res[i]);
        temp = forward(temp, c);
        i++;
    }
    res[i] = 0;
    return (char **)res;
}