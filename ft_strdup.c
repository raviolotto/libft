/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:51:25 by jacopo            #+#    #+#             */
/*   Updated: 2023/02/01 17:00:32 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    char    *new_s;
    size_t i;
    
    i = 0;
    new_s = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if(!new_s)
        return(NULL);
    while(s[i])
    {
        new_s[i] = s[i];
        i++;
    }
new_s[i] = '\0';
return (new_s);
}