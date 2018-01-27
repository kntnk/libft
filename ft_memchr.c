/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanaka <ktanaka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 15:25:30 by ktanaka           #+#    #+#             */
/*   Updated: 2018/01/20 16:07:43 by ktanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char *)str;
	while (n--)
	{
		if (*ptr != (unsigned char)c)
			ptr++;
		else
			return (ptr);
	}
	return (NULL);
}
