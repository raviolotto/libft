/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:01:11 by jacopo            #+#    #+#             */
/*   Updated: 2023/02/08 17:04:37 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
    else if(n < 0)
    {
        ft_putstr_fd("-", fd);
        ft_putnbr_fd(-n, fd);
    }
    else
    {
        if (n > 9)
            ft_putnbr_fd(n / 10, fd);
        ft_putchar_fd(48 + n % 10, fd);
    }
}