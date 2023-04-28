/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_binus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:19:51 by palucena          #+#    #+#             */
/*   Updated: 2023/04/28 13:43:23 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*actual;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		actual = *lst;
		*lst = actual->next;
		free(actual);
	}
	*lst = 0;
}
