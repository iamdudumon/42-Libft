/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dukim <dukim@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 02:11:55 by dukim             #+#    #+#             */
/*   Updated: 2024/02/29 02:18:36 by dukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	len;

	if (!s || *s == '\0')
		return (s);
	len = 0;
	while (s[len] != '\0')
		len++;
	s += len - 1;
	while (len > 0)
	{
		if (*s == (char)c)
			return (s);
		s++;
		len--;
	}
	return (0);
}
