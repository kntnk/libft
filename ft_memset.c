/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanaka <ktanaka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 14:32:15 by ktanaka           #+#    #+#             */
/*   Updated: 2018/01/20 14:45:28 by ktanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;
	int				i;

	ptr = str;
	i = 0;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (str);
}
