/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dukim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:55:46 by dukim             #+#    #+#             */
/*   Updated: 2024/03/08 18:58:30 by dukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			len;
	unsigned char	c1;
	unsigned char	c2;

	len = 0;
	c1 = (unsigned char)s1[len];
	c2 = (unsigned char)s2[len];
	while ((c1 != '\0' && c2 != '\0') && len < n)
	{
		if (c1 != c2)
			return (c1 - c2);
		len++;
		c1 = (unsigned char)s1[len];
		c2 = (unsigned char)s2[len];
	}
	if (len == n)
		return (0);
	return (c1 - c2);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char *str1 = "1234";
	char *str2 = "123456";
	char *str3 = "abcdefg";
	char *str4 = "abcdufg";
	char *str5 = " ";
	char *str6 = "   ";
	char *str7 = "!@#$%";
	char *str8 = "!@#$%";

	printf("%s <-> %s: %d\n", str1, str2, ft_strncmp(str1, str2, 3));
	printf("%s <-> %s: %d\n", str3, str4, ft_strncmp(str3, str4, 7));
	printf("%s <-> %s: %d\n", str5, str6, ft_strncmp(str5, str6, 2));
	printf("%s <-> %s: %d\n", str7, str8, ft_strncmp(str7, str8, 3));
	printf("%s <-> %s: %d\n", str3, str4, ft_strncmp(str3, str4, 0));
	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
	printf("%d\n", (unsigned char)'\200');
	
	printf("\n");

	printf("%s <-> %s: %d\n", str1, str2, strncmp(str1, str2, 3));
	printf("%s <-> %s: %d\n", str3, str4, strncmp(str3, str4, 7));
	printf("%s <-> %s: %d\n", str5, str6, strncmp(str5, str6, 2));
	printf("%s <-> %s: %d\n", str7, str8, strncmp(str7, str8, 3));
	printf("%s <-> %s: %d\n", str3, str4, strncmp(str3, str4, 0));
}*/
