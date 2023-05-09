/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouaraqa <zouaraqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:25:56 by zouaraqa          #+#    #+#             */
/*   Updated: 2022/10/14 08:05:04 by zouaraqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	check(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		s1len;

	if (!s1)
		return (0);
	i = 0;
	s1len = ft_strlen(s1) - 1;
	while (s1[i] && check(s1[i], set))
		i++;
	while (s1[s1len] && s1len > i && check(s1[s1len], set))
		s1len--;
	return (ft_substr(s1, i, (s1len - i + 1)));
}
