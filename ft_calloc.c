/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouaraqa <zouaraqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:52:52 by zouaraqa          #+#    #+#             */
/*   Updated: 2022/10/14 07:58:24 by zouaraqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*cal;

	cal = malloc(size * count);
	if (!cal)
		return (0);
	ft_bzero(cal, size * count);
	return ((void *)cal);
}
