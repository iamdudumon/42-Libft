/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dukim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:39:32 by dukim             #+#    #+#             */
/*   Updated: 2024/02/29 00:44:42 by dukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && j + i + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	while (src[j] != '\0')
		j++;
	dst[i + j] = '\0';
	if (i >= size)
		return (j + size);
	return (i + j);
}
/*
#include <stdio.h>

int	main()
{
	//char dst1[100];
	char dst2[100];
	const char *str = "abcdef ghijk";
	
	dst2[0] = '\0';
	//printf("strlcpy: %d -> %s\n", strlcpy(dst1, str, 5), dst1);
	printf("ft_strlcpy: %zu -> %s\n", ft_strlcat(dst2, "sdlfjldsfjlsdf", 10), dst2);
	printf("ft_strlcpy: %zu -> %s\n", ft_strlcat(dst2, str, 20), dst2);
}*/
