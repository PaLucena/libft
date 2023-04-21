/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:18:43 by palucena          #+#    #+#             */
/*   Updated: 2023/04/21 16:34:00 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nb, size_t size)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)malloc(size * nb);
	if (!ptr)
		return (0);
	i = 0;
	while (i < (nb * size))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
