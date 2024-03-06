/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dukim <dukim@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:24:49 by dukim             #+#    #+#             */
/*   Updated: 2024/03/06 17:55:51 by dukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	pow_10(unsigned int un)
{
	unsigned int	pow;

	if (un >= 1000000000)
		return (1000000000);
	pow = 1;
	while (pow <= un)
		pow *= 10;
	return (pow / 10);
}

char	*ft_itoa(int n)
{
	char				itoa[11];
	unsigned int		pow;
	unsigned int		un;
	int					i;

	i = 0;
	if (n < 0)
	{
		un = -n;
		itoa[i++] = '-';
	}
	else
		un = n;
	pow = pow_10(un);
	while (pow)
	{
		itoa[i++] = (un / pow) + '0';
		un = un % pow;
		pow /= 10;
	}
	itoa[i] = '\0';
	if (i == 0)
		return (ft_strdup("0"));
	return (ft_strdup(itoa));
}
/*
#include <stdio.h>

int	main(){
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(1000000000));
	printf("%s\n", ft_itoa(-1000000000));
}*/