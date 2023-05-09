/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouaraqa <zouaraqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:08:31 by zouaraqa          #+#    #+#             */
/*   Updated: 2023/02/02 09:46:12 by zouaraqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	word_count(char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
			count++;
		while (*str && *str != c)
			str++;
	}
	return (count);
}

static char	**word_len(char *s, char c, char **str)
{
	int		i;
	int		j;

	i = 0;
	while (*s)
	{
		j = 0;
		while (*s && *s == c)
			s++;
		while (s[j] && s[j] != c)
			j++;
		if (*s)
		{
			str[i] = (char *)ft_calloc(j + 1, sizeof(char));
			ft_memmove(str[i], s, j);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		nbw;
	char	**str;

	if (!s)
		return (0);
	nbw = word_count((char *)s, c);
	str = (char **)ft_calloc(nbw + 1, sizeof(char *));
	if (!str)
		return (0);
	str = word_len((char *)s, c, str);
	return (str);
}
