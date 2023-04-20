/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:51:57 by palucena          #+#    #+#             */
/*   Updated: 2023/04/20 12:03:20 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*s2;
	int		i;

	i = 0;
	while (s[i])
		i++;
	s2 = (char *)malloc(i);
	if (!s2)
		return (0);
	i = -1;
	while (s[++i])
		s2[i] = s[i];
	return (s2);
}

/* #include <stdio.h>

int	main(void)
{
	char	s[] = "qwerty";
	
	printf("%s", ft_strdup(s));
	return (0);
} */