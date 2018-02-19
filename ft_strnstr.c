/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanaka <ktanaka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 17:19:35 by ktanaka           #+#    #+#             */
/*   Updated: 2018/02/18 20:56:34 by ktanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = -1;
	str = (char *)big;
	if (little[0] == '\0')
		return (str);
	while (str[++i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < n)
		{
			if (little[j + 1] == '\0')
				return (&str[i]);
			++j;
		}
	}
	return (NULL);
}
