/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:11:45 by jcardina          #+#    #+#             */
/*   Updated: 2023/02/07 12:25:35 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str;
    int     i;
    
    if (!s)
        return(NULL);
    str = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!str)
        return(NULL);
    i = 0;
    while(s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = 0;
    return(str);
}