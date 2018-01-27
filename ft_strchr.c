/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanaka <ktanaka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 16:53:17 by ktanaka           #+#    #+#             */
/*   Updated: 2018/01/20 17:03:01 by ktanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0' && *str != c)
		str++;
	if (*str == c)
		return ((char*)str);
	else
		return (NULL);
}
