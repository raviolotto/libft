/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:44:38 by jcardina          #+#    #+#             */
/*   Updated: 2023/02/07 16:52:50 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;

    i = 0;
    if (s == NULL)
        return ;
    while(s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}