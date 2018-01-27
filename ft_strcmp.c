/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanaka <ktanaka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 17:25:08 by ktanaka           #+#    #+#             */
/*   Updated: 2018/01/20 17:45:05 by ktanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	int				i;

	i = 0;
	ptr1 = (unsigned char*)str1;
	ptr2 = (unsigned char*)str2;
	while (ptr1[i] && ptr1[i] == ptr2[i])
		i++;
	return (ptr1[i] - ptr2[i]);
}
