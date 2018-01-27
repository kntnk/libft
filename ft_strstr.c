/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanaka <ktanaka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 17:08:48 by ktanaka           #+#    #+#             */
/*   Updated: 2018/01/20 17:19:06 by ktanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0')
	{
		if (*big == little[i])
			i++;
		else
			i = 0;
		if (little[i] == '\0')
			return ((char *)(big - i + 1));
		big++;
	}
	return (NULL);
}
