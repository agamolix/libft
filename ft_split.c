/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/04/20 13:03:51 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_strlen_split(char const *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*line(char const *str, char c)
{
	char	*temp;
	int		len;
	int		i;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	temp = malloc((len + 1) * sizeof(char));
	if (temp == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = 0;
	return (temp);
}

char	*forward(char const *str, char c)
{
	while (str[0] && str[0] == c)
		str++;
	return ((char *)str);
}

int	count(char const *str, char c)
{
	char	*temp;
	int		i;

	i = 0;
	temp = forward(str, c);
	while (temp[0])
	{
		i++;
		while (temp[0] && temp[0] != c)
			temp++;
		temp = forward(temp, c);
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char const	**res;
	int			i;
	char		*temp;

	if (s == 0)
		return (NULL);
	res = malloc((count(s, c) + 1) * sizeof(char *));
	if (res == 0)
		return (0);
	i = 0;
	temp = forward(s, c);
	while (temp[0])
	{
		res[i] = line(temp, c);
		temp = temp + ft_strlen_split(res[i]);
		temp = forward(temp, c);
		i++;
	}
	res[i] = 0;
	return ((char **)res);
}
