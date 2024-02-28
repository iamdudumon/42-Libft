/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dukim <dukim@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 23:29:02 by dukim             #+#    #+#             */
/*   Updated: 2024/02/29 00:46:40 by dukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i + 1 < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
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
