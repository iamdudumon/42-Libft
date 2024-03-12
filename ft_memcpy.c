/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dukim <dukim@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:30:47 by dukim             #+#    #+#             */
/*   Updated: 2024/03/04 13:42:24 by dukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*convert_dest;
	unsigned char	*convert_src;
	size_t			size;

	if (dest == src)
		return (dest);
	convert_dest = (unsigned char *)dest;
	convert_src = (unsigned char *)src;
	size = 0;
	while (size < n)
	{
		*(convert_dest + size) = *(convert_src + size);
		size++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char str1[100], *str2 = "abcdefghi";
	ft_memcpy(str1, str2, 9);
	printf("%s\n\n", str1);

	int	arr1[100], arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	memcpy(arr1, str2, sizeof(char) * 16);
	for(int i = 0; i < 10; i++)
		printf("%d\n", arr1[i]);
	printf("%p\n\n", arr2);

	char *str3 = &str1[0];
	printf("%s\n", str3);
	str3 = ft_memcpy(0, str1, 3);
	printf("%s\n\n", str3);
}*/
