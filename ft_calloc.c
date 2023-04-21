/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:18:43 by palucena          #+#    #+#             */
/*   Updated: 2023/04/21 13:04:01 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nelem, size_t size)
{
	char	*ptr;

	size = nelem * sizeof(char);
	ptr = (char *)malloc(size);
	if (!ptr)
		return (0);
	while (*ptr)
	{
		ptr = 0;
		ptr++;
	}
	return (ptr);
}
