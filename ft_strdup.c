/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:51:57 by palucena          #+#    #+#             */
/*   Updated: 2023/04/21 17:12:36 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*s2;
	size_t		i;

	i = 0;
	s2 = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s2)
		return (0);
	while (i <= (size_t)(ft_strlen(s)))
	{
		s2[i] = s[i];
		i++;
	}
	return (s2);
}
