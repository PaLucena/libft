/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:19:59 by palucena          #+#    #+#             */
/*   Updated: 2023/04/21 13:18:41 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pt_dest;
	const char	*pt_src;
	char		*temp;
	size_t		i;

	i = -1;
	temp = malloc(sizeof(char) * n);
	pt_dest = (char *)dest;
	pt_src = (const char *)src;
	while (++i < n)
		temp[i] = pt_src[i];
	i = -1;
	while (++i < n)
		pt_dest[i] = temp[i];
	free(temp);
	return (dest);
}
