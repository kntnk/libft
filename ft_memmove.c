/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanaka <ktanaka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 15:06:38 by ktanaka           #+#    #+#             */
/*   Updated: 2018/01/20 15:23:55 by ktanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*dest;
	char	*src;
	size_t	i;

	dest = (char *)str1;
	src = (char *)str2;
	i = -1;
	if (dest < src)
	{
		while (++i < n)
		{
			dest[i] = src[i];
		}
	}
	else
	{
		while ((int)(--n) >= 0)
		{
			dest[n] = src[n];
		}
	}
	return (str1);
}
