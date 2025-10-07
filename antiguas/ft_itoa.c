/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goramos- <goramos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:52:44 by goramos-          #+#    #+#             */
/*   Updated: 2025/10/07 17:57:27 by goramos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
#include <stdlib.h>

static int	count_char(int num)
{
	int	counter;

	counter = 0;
	if (num != 0)
	{
		if (num < 0)
		{
			num = num * (-1);
			counter++;
		}
		while (num != 0)
		{
			num = num / 10;
			counter++;
		}
	}
	else
		return (1);
	return (counter);
}

char	*ft_itoa(int n)
{

}
