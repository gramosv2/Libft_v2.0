/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goramos- <goramos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:27:01 by goramos-          #+#    #+#             */
/*   Updated: 2025/10/07 15:27:07 by goramos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *fin, const char *origen, size_t size)
{
	char	*origen_s;
	size_t	long_fin;
	size_t	res;
	size_t	long_origen;
	size_t	i;

	origen_s = (char *)origen;
	long_fin = ft_strlen(fin);
	long_origen = ft_strlen(origen_s);
	res = 0;
	i = 0;
	if (size > long_fin)
		res = long_origen + long_fin;
	else
		res = long_origen + size;
	while (origen_s[i] && (long_fin + 1) < size)
	{
		fin[long_fin] = origen_s[i];
		long_fin++;
		i++;
	}
	fin[long_fin] = '\0';
	return (res);
}
