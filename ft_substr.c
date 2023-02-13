/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:00:23 by jacopo            #+#    #+#             */
/*   Updated: 2023/02/09 18:02:04 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    char *subs;
    
    if (len > ft_strlen(s))
		len = ft_strlen(s);
    if (start > ft_strlen(s))
        return(ft_strdup(""));
    if (len == ft_strlen(s))
        subs = malloc(sizeof(*s) * (len - start + 1));
    else    
        subs = malloc(sizeof(*s) * len + 1);
    if(!subs)
        return(NULL);
    i = 0;
    if (start < ft_strlen(s))
    {
        while(i < len && s[i])
        {
            subs[i] = s[start + i];
            i++;
        }
    }
    subs[i] = '\0';
    return (subs);
}