/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dukim <dukim@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:30:36 by dukim             #+#    #+#             */
/*   Updated: 2024/03/04 19:52:45 by dukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_word_cnt(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
		cnt++;
	}
	return (cnt);
}

char	*make_str(char const *s, char c, int *index)
{
	char	*split;
	int		len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	split = (char *)malloc(sizeof(char) * (len + 1));
	if (!split)
		return (0);
	ft_strlcpy(split, s, len + 1);
	*index += len;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**str_split;
	int		word_cnt;
	int		i;
	int		j;

	i = 0;
	while (s[i] == c && s[i])
		i++;
	word_cnt = get_word_cnt(&s[i], c);
	str_split = (char **)malloc(sizeof(char *) * (word_cnt + 1));
	str_split[word_cnt] = 0;
	if (!str_split)
		return (0);
	j = 0;
	while (j < word_cnt)
	{
		str_split[j] = make_str(&s[i], c, &i);
		while (s[i] == c && s[i])
			i++;
		j++;
	}
	return (str_split);
}
/*
#include <stdio.h>

int main()
{
	char **split = ft_split(" ab   cd ef gh ij  ", ' ');
	int i = 0;
	while (split[i]){
		printf("%s\n", split[i]);
		i++;
	}
}*/