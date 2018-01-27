/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanaka <ktanaka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 14:58:45 by ktanaka           #+#    #+#             */
/*   Updated: 2018/01/20 15:04:12 by ktanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	dest = (unsigned char *)str1;
	src = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == (unsigned char)c)
		{
			return (str1 + i + 1);
		}
		i++;
	}
	return (NULL);
}
