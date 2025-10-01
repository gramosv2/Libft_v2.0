/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-l <gramos-l@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:23:42 by gramos-l          #+#    #+#             */
/*   Updated: 2024/03/15 10:03:52 by gramos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == (char)c)
			return (&((char *)s)[i]);
		++i;
	}
	return ((void *)0);
}

// int main (void)
// {
//     const void *hola = 'hola mundo';
// 	int adios = 'o';
// 	size_t nos_vemos = '3';
//     write(1,&(char){ft_memchr(hola) + '0' }, 1);
//     return(0);
// }