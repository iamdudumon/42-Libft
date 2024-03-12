/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dukim <dukim@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:56:16 by dukim             #+#    #+#             */
/*   Updated: 2024/03/04 13:55:32 by dukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*convert_dest;
	unsigned char	*convert_src;
	size_t			size;

	if (dest == src)
		return (dest);
	if ((size_t)(dest - src) >= n)
		return (ft_memcpy(dest, src, n));
	convert_dest = (unsigned char *)dest;
	convert_src = (unsigned char *)src;
	size = n;
	while (--size > 0)
		*(convert_dest + size) = *(convert_src + size);
	*convert_dest = *convert_src;
	return ((void *)convert_dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char str1[100], *str2 = "abcdefghi";
	ft_memmove(str1, str2, 9);
	printf("%s\n\n", str1);

	int	arr1[100], arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	memmove(arr1, str2, sizeof(char) * 16);
	for(int i = 0; i < 10; i++)
		printf("%d\n", arr1[i]);
	printf("%p\n\n", arr2);

	char *str3 = &str1[0];
	printf("%s\n", str3);
	str3 = ft_memmove(str3, str1, 1);
	printf("%s\n\n", str3);
}*/
