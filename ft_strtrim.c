/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanaka <ktanaka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 12:31:17 by ktanaka           #+#    #+#             */
/*   Updated: 2018/01/26 16:11:05 by ktanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (s[i] == '\0')
		return (ft_strdup(s + i));
	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	return (ft_strsub(s, i, j - i + 1));
}
