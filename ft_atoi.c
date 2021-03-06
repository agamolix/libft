/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:53:59 by atrilles          #+#    #+#             */
/*   Updated: 2022/04/20 13:42:24 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*remove_space(char *str)
{
	while (str[0] == ' ' || str[0] == '\t' || str[0] == '\n' || str[0] == '\v'
		|| str[0] == '\f' || str[0] == '\r')
	{
		str++;
	}
	return (str);
}

static int	convert(char *str, int len_nb, int sign)
{
	unsigned int	res;

	res = 0;
	while (len_nb > 0)
	{
		res = res * 10;
		res = res + str[0] - '0';
		if (len_nb != 1)
			str++;
		len_nb--;
	}
	if (res > 2147483647 && sign == 1)
		return (2147483647);
	if (res > 2147483648 && sign == -1)
		return (-2147483648);
	return ((int)res * sign);
}

static int	calc_len_nb(char *str)
{
	int	len_nb;

	len_nb = 0;
	while (str[len_nb] >= '0' && str[len_nb] <= '9')
		len_nb++;
	return (len_nb);
}

int	ft_atoi(const char *nptr)
{
	char	*res;
	int		sign;
	int		len_nb;

	sign = 1;
	if (nptr == 0)
		return (0);
	res = remove_space((char *)nptr);
	if (res[0] == '-')
	{
		sign = -1;
		res++;
	}
	else if (res[0] == '+')
		res++;
	len_nb = calc_len_nb(res);
	return (convert(res, len_nb, sign));
}
