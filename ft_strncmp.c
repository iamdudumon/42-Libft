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
