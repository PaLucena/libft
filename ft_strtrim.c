/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:50:34 by palucena          #+#    #+#             */
/*   Updated: 2023/04/24 14:07:43 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_start(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				i++;
				break ;
			}
			j++;
		}
		if (j == ft_strlen(set))
			return (i);
			j = 0;
	}
	return (0);
}

int	ft_finish(char const *s1, char const *set)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (s1[len])
		len++;
	while (len > 0)
	{
		while (set[i])
		{
			if (s1[len - 1] == set[i])
			{
				len--;
				break ;
			}
			i++;
		}
		if (i == ft_strlen(set))
			return (len);
		i = 0;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		s;
	int		f;
	char	*res;

	i = 0;
	s = ft_start(s1, set);
	f = ft_finish(s1, set);
	res = malloc(sizeof(char) * (f - s + 1));
	if (!res)
		return (0);
	while (s < f)
	{
		res[i] = s1[s];
		i++;
		s++;
	}
	res[i] = 0;
	return (res);
}
