/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dukim <dukim@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:13:00 by dukim             #+#    #+#             */
/*   Updated: 2024/02/29 11:26:51 by dukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space_ch(char ch)
{
	if ((9 <= ch && ch <= 13) || ch == ' ')
		return (1);
	return (0);
}

int	is_sign_ch(char ch)
{
	if (ch == '+' || ch == '-')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	sum;
	int	minus_cnt;

	sum = 0;
	minus_cnt = 0;
	while (is_space_ch(*nptr))
		nptr++;
	if (is_sign_ch(*nptr))
	{
		if (*nptr == '-')
			minus_cnt++;
		nptr++;
	}
	while (*nptr != '\0' && ft_isdigit(*nptr))
	{
		sum = sum * 10 + (*nptr - '0');
		nptr++;
	}
	if (minus_cnt)
		sum = -sum;
	return (sum);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("%d\n", ft_atoi("   ---+--+1234ab567"));
	printf("%d\n", ft_atoi("-0-1234"));
	printf("%d\n", ft_atoi("-2147 483648"));
	printf("%d\n", ft_atoi("2147-483647"));
	printf("%d\n", ft_atoi("--  -\t1000"));
	printf("%d\n", ft_atoi("  aa12bbf44"));
	printf("%d\n", ft_atoi("123213213--++122"));
	printf("%d\n", ft_atoi("2147483648"));
	printf("%d\n", ft_atoi("-123456789123456789"));
	printf("%d\n", ft_atoi("  \t-1234"));
	printf("%d\n", ft_atoi("   \n\t  -1234"));
	printf("\n");
	printf("%d\n", atoi("   ---+--+1234ab567"));
	printf("%d\n", atoi("-0-1234"));
	printf("%d\n", atoi("-2147 483648"));
	printf("%d\n", atoi("2147-483647"));
	printf("%d\n", atoi("--  -\t1000"));
	printf("%d\n", atoi("aa12bbf44"));
	printf("%d\n", atoi("123213213--++122"));
	printf("%d\n", atoi("2147483648"));
	printf("%d\n", atoi("-123456789123456789"));
	printf("%d\n", atoi("  \t-1234"));
	printf("%d\n", atoi("   \n\t  -1234"));
}*/
