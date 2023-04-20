/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:58:16 by palucena          #+#    #+#             */
/*   Updated: 2023/04/20 09:51:08 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)str;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/* #include <stdio.h>

int	main(void)
{
	void	*str = "qwerty";

	ft_bzero(str, 3);
	printf("%s\n", str);
	return (0);
}
 */