/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-l <gramos-l@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:50:08 by gramos-l          #+#    #+#             */
/*   Updated: 2024/03/22 16:51:53 by gramos-l         ###   ########.fr       */
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