/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouaraqa <zouaraqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:42:36 by zouaraqa          #+#    #+#             */
/*   Updated: 2022/10/14 07:58:37 by zouaraqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*move;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	move = *lst;
	while (move->next)
		move = move->next;
	move->next = new;
}
