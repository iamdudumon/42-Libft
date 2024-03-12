/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dukim <dukim@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:35:27 by dukim             #+#    #+#             */
/*   Updated: 2024/03/04 13:36:27 by dukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*convert_s;
	unsigned char	convert_c;
	size_t			size;

	convert_s = (unsigned char *)s;
	convert_c = (unsigned char)c;
	size = 0;
	while (size < n)
	{
		*(convert_s + size) = convert_c;
		size++;
	}
	return ((void *)convert_s);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main()
{
	int *str;
	str = (int *)malloc(sizeof(int) * 100);
	str = (int *)ft_memset(str, 1, sizeof(int) * 10);
	for (int i = 0; i < 10; i++)
		printf("%d\n", str[i]);
}*/
