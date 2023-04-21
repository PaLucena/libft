/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:52:00 by palucena          #+#    #+#             */
/*   Updated: 2023/04/21 13:15:31 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
/* 
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
} */

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*s_total;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	s_total = (char *)malloc((i + j + 1) * sizeof(char));
	if (!s_total)
		return (0);
	i = -1;
	while (s1[++i])
		s_total[i] = s1[i];
	j = -1;
	while (s2[++j])
	{
		s_total[i] = s2[j];
		i++;
	}
	s_total[i] = 0;
	return (s_total);
}

/* #include <stdio.h>

int	main(void)
{
	char	*s1 = "qwe";
	char	*s2 = "rty";

	printf("%s", ft_strjoin(s1, s2));
	return (0);
} */