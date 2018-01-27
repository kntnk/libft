/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanaka <ktanaka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 15:37:46 by ktanaka           #+#    #+#             */
/*   Updated: 2018/01/20 15:44:40 by ktanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char *ptr1;
	const unsigned char *ptr2;

	ptr1 = str1;
	ptr2 = str2;
	while (n--)
	{
		if (*ptr1 != *ptr2)
		{
			return (*ptr1 - *ptr2);
		}
		else
		{
			ptr1++;
			ptr2++;
		}
	}
	return (0);
}
