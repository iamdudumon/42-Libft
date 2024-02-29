/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dukim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:39:32 by dukim             #+#    #+#             */
/*   Updated: 2024/02/29 02:08:30 by dukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] != '\0')
		dst_len++;
	while (src[src_len] != '\0' && dst_len + src_len + 1 < size)
	{
		dst[dst_len + src_len] = src[src_len];
		src_len++;
	}
	while (src[src_len] != '\0')
		src_len++;
	dst[dst_len + src_len] = '\0';
	if (dst_len >= size)
		return (src_len + size);
	return (dst_len + src_len);
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
