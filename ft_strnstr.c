/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:38:36 by palucena          #+#    #+#             */
/*   Updated: 2023/04/21 13:03:09 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	c;

	c = 0;
	if (*to_find == '\0')
		return (str);
	while (*str && ++c < n)
	{
		if (*str == *to_find)
		{
			i = 0;
			j = 0;
			while (to_find[i] != '\0' && c < n)
			{
				if (str[i] != to_find[i])
					j = 1;
				i++;
			}
			if (j == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	char	s1[] = "Una aguja en un pajar";
	char	s2[] = "aguja";

	printf("%s", ft_strnstr(s1, s2, 9));
	return (0);
} */