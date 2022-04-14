/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/08 16:14:27 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
    char c;
    if (fd < 0)
        return;
    if (n == -2147483648)
    {
        ft_putnbr_fd(n / 10, fd);
        write(fd, "8", 1);
        return;
    }
    else if (n < 0)
    {
        n = n * -1;
        write(fd, "-", 1);
    }
    if (n / 10 > 0)
    {
        ft_putnbr_fd(n / 10, fd);
        c = n % 10 + '0';
    }
    else
        c = n + '0';
    write(fd, &c, 1);
}