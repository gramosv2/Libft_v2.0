/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-l <gramos-l@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 09:35:59 by gramos-l          #+#    #+#             */
/*   Updated: 2024/03/23 09:38:13 by gramos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*sr;

	dest = (unsigned char *)dst;
	sr = (const unsigned char *)src;
	if (dest > sr)
	{
		while (len--)
			dest[len] = sr[len];
	}
	else if (dest < sr)
		ft_memcpy(dst, src, len);
	return (dst);
}
