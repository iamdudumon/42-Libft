/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dukim <dukim@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 02:25:18 by dukim             #+#    #+#             */
/*   Updated: 2024/02/29 11:12:41 by dukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*convert_s;
	unsigned char	convert_c;
	size_t			size;

	if (!s || n == 0)
		return (s);
	convert_s = (unsigned char *)s;
	convert_c = (unsigned char)c;
	size = 0;
	while (size < n)
	{
		if (*(convert_s + size) == convert_c)
			return ((void *)(convert + size));
		size++;
	}
	return (0);
}