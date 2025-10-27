/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goramos- <goramos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:28:13 by goramos-          #+#    #+#             */
/*   Updated: 2025/10/27 21:37:03 by goramos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		long1;
	int		long2;
	char	*str;

	if (s1 && s2)
	{
		long1 = ft_strlen(s1);
		long2 = ft_strlen(s2);
		str = (char *)malloc(sizeof(char) * (long1 + long2 + 1));
		if (str == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			str[long1] = s2[i];
			long1++;
		}
		str[long1] = '\0';
		return (str);
	}
	return (NULL);
}
