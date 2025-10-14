/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goramos- <goramos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:48:46 by goramos-          #+#    #+#             */
/*   Updated: 2025/10/14 13:48:48 by goramos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	idx;

	idx = 0;
	while (idx < n)
	{
		*((unsigned char *)s + idx) = c;
		idx = idx + 1;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char str[20] = "Esto es una prueba";
//     printf("%s\n", str);
//     ft_memset(str, '$', 3);
//     printf("%s\n", str);

//     return 0;
// }
