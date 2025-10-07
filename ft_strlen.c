/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goramos- <goramos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:28:24 by goramos-          #+#    #+#             */
/*   Updated: 2025/10/07 15:28:25 by goramos-         ###   ########.fr       */
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
