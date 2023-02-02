/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:11:03 by jacopo            #+#    #+#             */
/*   Updated: 2023/02/02 17:36:05 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  size;
    int  i;
    size_t  j;
    char    *str; 
    size = (ft_strlen(s1)) + (ft_strlen(s2)) + 1;
    str = malloc(sizeof(char) * size);
    if(!str)
        return(NULL);
    i = -1;
    j = 0;
    while(s1[++i])
        str[j++] = s1[i];
    i = -1;
    while(s2[++i])
        str[j++] = s2[i];
    str[j] = '\0';
    return (str);    
}