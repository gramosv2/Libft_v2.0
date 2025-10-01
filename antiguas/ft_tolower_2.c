/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-l <gramos-l@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:23:24 by gramos-l          #+#    #+#             */
/*   Updated: 2024/03/15 10:49:50 by gramos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

// int	main(void)
// {
// 	char	c;

// 	c = 'R';
// 	printf("%d\n", ft_tolower(c));
// 	return (0);
// }
