/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanaka <ktanaka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 17:45:45 by ktanaka           #+#    #+#             */
/*   Updated: 2018/02/19 14:03:19 by ktanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	value;
	int					sign;

	value = 0;
	sign = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = 1;
		str++;
	}
	while (str[0] >= '0' && str[0] <= '9')
	{
		value = value * 10 + (str[0] - 48);
		str++;
	}
	if (value > 9223372036854775807)
		return ((sign == 1) ? 0 : -1);
	if (sign == 1)
		return (-value);
	else
		return (value);
}
