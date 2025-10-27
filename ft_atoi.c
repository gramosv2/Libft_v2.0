/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goramos- <goramos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 22:52:01 by goramos-          #+#    #+#             */
/*   Updated: 2025/10/27 21:35:07 by goramos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_to_value(char c)
{
	if (c >= 48 && c <= 57)
		return (c - 48);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	value;
	int	result;
	int	sign;
	int	i;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		value = ft_char_to_value(str[i]);
		result = (result * 10) + value;
		i++;
	}
	return (result * sign);
}
