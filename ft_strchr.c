/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-l <gramos-l@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:47:01 by gramos-l          #+#    #+#             */
/*   Updated: 2024/03/22 17:09:59 by gramos-l         ###   ########.fr       */
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
