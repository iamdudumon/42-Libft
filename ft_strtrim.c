/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dukim <dukim@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:56:10 by dukim             #+#    #+#             */
/*   Updated: 2024/03/04 18:28:25 by dukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	size_t	left_trim;
	size_t	right_trim;

	if (!s1 || !set || *s1 == '\0' || *set == '\0')
		return ((char *)s1);
	left_trim = 0;
	while (*(s1 + left_trim) != '\0')
	{
		temp = ft_strchr(set, *(s1 + left_trim));
		if (!temp)
			break ;
		left_trim++;
	}
	right_trim = ft_strlen(s1) - 1;
	while (right_trim != 0)
	{
		temp = ft_strchr(set, *(s1 + right_trim));
		if (!temp)
			break ;
		right_trim--;
	}
	return (ft_substr(s1, left_trim, right_trim - left_trim + 1));
}
/*
#include <stdio.h>

int	main()
{
	printf("%s\n", ft_strtrim("_!ABCDEFG#\0", "#A!_\0"));
	printf("%s\n", ft_strtrim("_!ABCDEFG#", "\0"));
	printf("%s\n", ft_strtrim("_!ABCDEFG#", ""));
}*/
