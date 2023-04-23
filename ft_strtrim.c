/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:50:34 by palucena          #+#    #+#             */
/*   Updated: 2023/04/23 19:03:38 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		h;
	char	*res;

	i = 0;
	while (ft_strchr(set, s1[i]) != 0)
		i++;
	j = ft_strlen(s1);
	while (ft_strrchr(set, s1[j]) != 0)
		j--;
	res = malloc(sizeof(char) * (j - i + 2));
	if (!res || !s1)
		return (0);
	h = 0;
	while (i <= j)
	{
		res[h] = s1[i];
		i++;
		h++;
	}
	res[h] = 0;
	return (res);
}
