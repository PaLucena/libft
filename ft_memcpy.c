/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:09:58 by palucena          #+#    #+#             */
/*   Updated: 2023/04/26 13:15:54 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*pt_dest;
	const char	*pt_src;

	if (!src && !dest)
		return (0);
	i = 0;
	pt_dest = (char *)dest;
	pt_src = (const char *)src;
	while (i < n)
	{
		pt_dest[i] = pt_src[i];
		i++;
	}
	return (dest);
}
