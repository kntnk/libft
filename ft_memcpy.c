/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanaka <ktanaka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 14:49:55 by ktanaka           #+#    #+#             */
/*   Updated: 2018/01/20 14:58:06 by ktanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
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
		i++;
	}
	return (str1);
}
