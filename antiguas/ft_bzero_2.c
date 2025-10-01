/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goramos- <goramos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:32:14 by goramos-          #+#    #+#             */
/*   Updated: 2025/09/30 18:29:23 by goramos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *b, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = b;
	i = 0;
	while (i < len)
	{
		p[i] = 0;
		i++;
	}
}

// int main() {
//     char buffer[10] = "Hello";
//     printf("Buffer antes de bzero: %s\n", buffer);
//     ft_bzero(buffer, 1);
//     printf("Buffer después de bzero: %s\n", buffer);
//     return (0);
// }
