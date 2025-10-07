/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goramos- <goramos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:43:04 by goramos-          #+#    #+#             */
/*   Updated: 2025/10/07 17:43:22 by goramos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	size_t	num;

	num = size * count;
	mem = malloc(num);
	if (!mem)
		return (0);
	ft_bzero(mem, num);
	return (mem);
}
