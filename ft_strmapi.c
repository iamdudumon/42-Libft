/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dukim <dukim@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:58:10 by dukim             #+#    #+#             */
/*   Updated: 2024/03/06 19:39:25 by dukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapi;
	int		len;
	int		i;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	mapi = (char *)malloc(sizeof(char) * (len + 1));
	if (!mapi)
		return (0);
	i = 0;
	while (i < len)
	{
		mapi[i] = f(i, s[i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}
/*
#include <stdio.h>

char	func(unsigned int i, char c)
{
	c += i;
	return (c);
}

char	upper(unsigned int i, char c)
{
	if (i > 0)
		c = c;
	if ('a' <= c && c <= 'z')
		c -= ('a' - 'A');
	return (c);
}

int	main()
{
	char	str[] = "aaaaaa";

	printf("%s\n", ft_strmapi(str, &func));
	printf("%s\n", ft_strmapi("HeLlO wOrLd!!", &upper));
}*/
