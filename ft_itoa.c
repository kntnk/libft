/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanaka <ktanaka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 13:09:44 by ktanaka           #+#    #+#             */
/*   Updated: 2018/01/26 13:26:34 by ktanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	check_negative(int *n, int *negative)
{
	if (*n < 0)
	{
		*n *= -1;
		*negative = 1;
	}
}

char	*ft_itoa(int n)
{
	int		temp;
	int		length;
	int		negative;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	temp = n;
	length = 2;
	negative = 0;
	check_negative(&n, &negative);
	while (temp /= 10)
		length++;
	length += negative;
	if ((str = (char *)malloc(sizeof(*str) * length)) == NULL)
		return (NULL);
	str[--length] = '\0';
	while (length--)
	{
		str[length] = n % 10 + '0';
		n = n + 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
