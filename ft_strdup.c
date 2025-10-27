/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goramos- <goramos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:27:58 by goramos-          #+#    #+#             */
/*   Updated: 2025/10/27 21:36:34 by goramos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	dest = (char *)malloc(ft_strlen(s1) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

// int main() {
//     const char* original = "Hola, mundo!";

//     // Utiliza la función personalizada mi_strdup
//     char* duplicado = mi_strdup(original);

//     // Verifica si la duplicación fue exitosa
//     if (duplicado != NULL) {
//         printf("Cadena original: %s\n", original);
//         printf("Cadena duplicada: %s\n", duplicado);

//         // Recuerda liberar la memoria asignada dinámicamente
//         free(duplicado);
//     } else {
//         printf("Fallo al duplicar la cadena.\n");
//     }

//     return (0);
// }
