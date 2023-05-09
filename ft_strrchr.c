/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouaraqa <zouaraqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:05:13 by zouaraqa          #+#    #+#             */
/*   Updated: 2023/02/04 11:26:31 by zouaraqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	if (!s)
		return (0);
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return (((char *)s + len));
		len--;
	}
	if (!(char)c)
		return (0);
	return (0);
}

// #include<stdio.h>
// int main()
// {
// 	const char *s = NULL;
// 	printf("%s",ft_strrchr(s, 'c'));
// }