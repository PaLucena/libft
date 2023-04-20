/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:24:28 by palucena          #+#    #+#             */
/*   Updated: 2023/04/20 09:43:43 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*pt_s1;
	const char	*pt_s2;
	int			i;
	int			count;

	pt_s1 = (const char *) s1;
	pt_s2 = (const char *) s2;
	i = -1;
	count = 0;
	while (++i < n)
		count = count + (pt_s1[i] - pt_s2[i]);
	return (count);
}

/* #include <stdio.h>

int	main(void)
{
	const void	*s1 = "qwerty";
	const void	*s2 = "qvertx";

	printf("%i", ft_memcmp(s1, s2, 6));
	return (0);
} */