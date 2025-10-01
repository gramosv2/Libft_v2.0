/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-l <gramos-l@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:34:16 by gramos-l          #+#    #+#             */
/*   Updated: 2024/03/22 17:33:16 by gramos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

// int main (void)
// {
//     char dest3[] = "mula";
//     const char src3[] = "hohoho";
//     size_t n2 = 2;
//     printf("%s\n", ft_memcpy(dest3,src3,n2));
//     return(0);

// }