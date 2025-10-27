/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goramos- <goramos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:28:41 by goramos-          #+#    #+#             */
/*   Updated: 2025/10/27 21:37:47 by goramos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		while (((i + j) < len) && (haystack[i + j] == needle[j])
			&& needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
		j = 0;
	}
	return (0);
}
