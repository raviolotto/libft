/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 23:11:05 by jcardina          #+#    #+#             */
/*   Updated: 2023/01/20 23:12:26 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	site_t i;

	i = ft_strlen(s);
	while(s[i])
	{
		if (s[i] == (char) c)
			return((char *)(s + i));
		i--;
	}
	return (NULL);
}