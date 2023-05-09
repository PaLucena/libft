/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:24:28 by palucena          #+#    #+#             */
/*   Updated: 2023/05/09 13:03:01 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*pt_s1;
	unsigned char	*pt_s2;
	size_t			i;

	pt_s1 = (unsigned char *) s1;
	pt_s2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (pt_s1[i] != pt_s2[i])
			return (pt_s1[i] - pt_s2[i]);
		i++;
	}
	return (0);
}
