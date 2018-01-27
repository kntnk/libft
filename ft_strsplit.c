/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanaka <ktanaka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 12:42:36 by ktanaka           #+#    #+#             */
/*   Updated: 2018/01/26 16:02:56 by ktanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbstr_c(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		while ((s[i] != '\0' && s[i] == c) || (s[i] != '\0' && s[i] != c))
			i++;
		if (s[i] != '\0')
			i++;
	}
	return (i);
}

int		ft_strlen_c(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

int		ft_strcpy_c(char *dest, char const *src, char c)
{
	int		i;

	i = 0;
	while (src[i] != '\0' && src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		len1;
	int		len2;

	i = 0;
	if (s == NULL)
		return (NULL);
	len1 = ft_nbstr_c(s, c) + 1;
	if ((str = (char **)malloc(sizeof(*str) * len1)) == NULL)
		return (NULL);
	while (*s != '\0' && *s == c)
		s++;
	while (*s)
	{
		len2 = ft_strlen_c(s, c) + 1;
		if ((str[i] = (char *)malloc(sizeof(**str) * len2)) == NULL)
			return (NULL);
		s = s + ft_strcpy_c(str[i], s, c);
		i++;
		while (*s != '\0' && *s == c)
			s++;
	}
	str[i] = 0;
	return (str);
}
