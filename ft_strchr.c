/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goramos- <goramos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:27:51 by goramos-          #+#    #+#             */
/*   Updated: 2025/10/27 21:36:24 by goramos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}

// int	main(void)
// {
// 	const char	*cadena = "1234m";
// 	int			caracter;
// 	char		*resultado;

// 	caracter = 'm';

// 	resultado = ft_strchr(cadena, caracter);
// 	if (resultado != NULL)
// 	{
// 		printf("El carácter '%c' fue encontrado en la posición %ld.\n",
// 			caracter, resultado - cadena + 1);
// 	}
// 	else
// 	{
// 		printf("El carácter '%c' no fue encontrado en la cadena.\n", caracter);
// 	}
// 	return (0);
// }
// #include <stdio.h>
