/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanaka <ktanaka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 10:51:02 by ktanaka           #+#    #+#             */
/*   Updated: 2018/01/26 11:15:11 by ktanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if ((str = (char *)malloc(sizeof(*str) * size)) != NULL)
	{
		while (i < size)
			str[i++] = 0;
	}
	return (str);
}
