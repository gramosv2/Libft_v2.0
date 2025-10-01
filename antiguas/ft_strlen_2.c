/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-l <gramos-l@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:53:10 by gramos-l          #+#    #+#             */
/*   Updated: 2024/03/23 17:08:27 by gramos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen( const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	const char	*cadena;
// 	char		valor;

// 	cadena = "Teresa eres espectacular";
// 	valor = ft_strlen(cadena);
// 	printf("%d\n", valor);
// 	return (0);
// }
