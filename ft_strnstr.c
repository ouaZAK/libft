/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouaraqa <zouaraqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:02:36 by zouaraqa          #+#    #+#             */
/*   Updated: 2023/02/04 11:31:47 by zouaraqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	leneedle;

	i = 0;
	j = 0;
	leneedle = ft_strlen(needle);
	if (!haystack && len == 0)
		return (0);
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j]
			&& needle[j]
			&& leneedle <= len - i)
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
#include<stdio.h>
#include<string.h>
int main()
{
	char *str = "zakisan";
	char *needl = "ki";
	int x = strlen(str);
	printf("oringin = %s\n", ft_strnstr(str, "ki", 3));
	printf("oringin = %s\n", ft_strnstr(str, "ki", 3));
}