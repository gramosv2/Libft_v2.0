/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-l <gramos-l@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:32:43 by gramos-l          #+#    #+#             */
/*   Updated: 2024/03/22 17:25:49 by gramos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
