/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:06:31 by jacopo            #+#    #+#             */
/*   Updated: 2023/02/02 18:54:01 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t r;
    size_t size;
    char *str;
    const char *chr;
    
    i = ft_strlen(set);
    r = ft_strlen(s1) - i;
    chr = ft_strrchr(s1, set[0]);
    if (ft_strncmp(s1, set, i) == 0 && ft_strncmp(chr, set, i) == 0)
    {
        str = malloc(sizeof(char) * (r - i +1));
        if(!str)
            return(NULL);
        //ft_strlcpy(str, s1 + i)
    }
    return(ft_strdup(s1));
}