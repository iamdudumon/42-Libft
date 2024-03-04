/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dukim <dukim@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 23:29:02 by dukim             #+#    #+#             */
/*   Updated: 2024/02/29 02:09:14 by dukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = 0;
	while (src[src_len] != '\0' && src_len + 1 < size)
	{
		dst[src_len] = src[src_len];
		src_len++;
	}
	if (size > 0)
		dst[src_len] = '\0';
	while (src[src_len] != '\0')
		src_len++;
	return (src_len);
}
/*
#include <stdio.h>

int	main()
{
	//char dst1[100];
	char dst2[100];
	const char *str = "abcdef ghijk";

	//printf("strlcpy: %d -> %s\n", strlcpy(dst1, str, 5), dst1);
	printf("ft_strlcpy: %zu -> %s\n", ft_strlcpy(dst2, "sdlfjldsfjlsdf", 10), dst2);
	printf("ft_strlcpy: %zu -> %s\n", ft_strlcpy(dst2, str, 0), dst2);
}*/
