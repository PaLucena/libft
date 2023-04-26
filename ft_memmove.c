/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:19:59 by palucena          #+#    #+#             */
/*   Updated: 2023/04/26 13:25:25 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pt_dest;
	const char	*pt_src;
	size_t		i;

	if (!src && !dest)
		return (0);
	i = 0;
	pt_dest = (char *)dest;
	pt_src = (char *)src;
	if (pt_dest > pt_src)
	{
		while (n-- != 0)
			pt_dest[n] = pt_src[n];
	}
	else
	{
		while (i < n)
		{
			pt_dest[i] = pt_src[i];
			i++;
		}
	}
	return (dest);
}
