/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:45:28 by jcardina          #+#    #+#             */
/*   Updated: 2023/01/21 15:26:49 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	j = dst_len + 1;
	if (destsize == 0)
		return (dst_len + (ft_strlen(src)));
	while (i < (destsize - 1 - dst_len))
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = 0;
	return (dst_len + (ft_strlen(src)));
}
