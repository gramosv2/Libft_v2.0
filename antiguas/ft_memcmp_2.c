/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-l <gramos-l@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:24:09 by gramos-l          #+#    #+#             */
/*   Updated: 2024/03/22 17:37:00 by gramos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	*str1 = "Hello";
// 	const char	*str2 = "World";
// 	int			result;

// 	result = ft_memcmp(str1, str2, 5);
// 	// Comparando los primeros 5 caracteres
// 	if (result == 0)
// 	{
// 		printf("Las cadenas son iguales.\n");
// 	}
// 	else if (result < 0)
// 	{
// 		printf("La primera cadena es menor que la segunda.\n");
// 	}
// 	else
// 	{
// 		printf("La primera cadena es mayor que la segunda.\n");
// 	}
// 	return (0);
// }
