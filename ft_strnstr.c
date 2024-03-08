/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dukim <dukim@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:29:25 by dukim             #+#    #+#             */
/*   Updated: 2024/02/29 11:12:31 by dukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	is_in_str(const char *str_slice, const char *to_find, size_t len)
{
	size_t	i;

	i = 0;
	while (to_find[i] != '\0' && i < len)
	{
		if (str_slice[i] != to_find[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		if (is_in_str(&big[i], little, len - i))
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	printf("%s\n", ft_strnstr("Abc Bar dsfds", "Bar", 0));
}*/
