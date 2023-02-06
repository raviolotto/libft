/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:32:18 by rowacopo          #+#    #+#             */
/*   Updated: 2023/02/06 17:14:02 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    **ft_split(char const *s, char c)
{
    int         row;
    int         i;
    char        **matrix;
    char        *s_trim;
    char const  *sep;

    sep = &c;
    row = 1;
    i = -1;
    s_trim = ft_strtrim(s, sep);
    while(s_trim[++i] != '\0')
        {
            if(s_trim[i] == sep[0])
                ++row;
            while(s_trim[i] == sep[0])
                i++;
        }
    free(s_trim);
    matrix = malloc (sizeof(char *) * (row + 1));
    if (!matrix)
		return (NULL);
    i = 0;
    while (*s)
	{
		if (*s != c)
		{
			row = 0;
			while (*s && *s != c && ++row)
				++s;
			matrix[i++] = ft_substr(s - row, 0, row);
		}
		else
			++s;
	}
    matrix[i] = 0;
    return(matrix);
}
