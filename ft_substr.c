/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:20:15 by palucena          #+#    #+#             */
/*   Updated: 2023/04/21 13:19:40 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	while (i < start)
		i++;
	i--;
	sub = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!sub)
		return (0);
	while (++i < (unsigned int)len)
		sub[i] = s[i];
	sub[i] = 0;
	return (sub);
}
