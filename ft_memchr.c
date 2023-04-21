/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:31:18 by palucena          #+#    #+#             */
/*   Updated: 2023/04/21 13:02:25 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*pt_s;

	pt_s = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (pt_s[i] == (unsigned char) c)
			return ((void *) s);
		s++;
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	const void	*str = "qwerty";
	char		*pt;

	pt = ft_memchr(str, 'y', sizeof (char) * 6);
	printf("%s", pt);
	return (0);
}
 */