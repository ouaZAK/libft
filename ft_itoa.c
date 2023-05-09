/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouaraqa <zouaraqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:03:52 by zouaraqa          #+#    #+#             */
/*   Updated: 2022/10/14 07:58:17 by zouaraqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	nblen(long *x, int n)
{
	int	count;

	count = 0;
	if (*x <= 0)
	{
		*x *= -1;
		count++;
	}
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static char	*reverse(char *str)
{
	char	tmp;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*str;
	long	x;

	i = 0;
	x = n;
	len = nblen(&x, n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (n == 0)
		str[i++] = '0';
	while (x)
	{
		str[i++] = (x % 10) + 48;
		x /= 10;
	}
	if (n < 0)
		str[i++] = '-';
	str[i] = '\0';
	return (reverse(str));
}
