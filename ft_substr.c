/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:20:15 by palucena          #+#    #+#             */
/*   Updated: 2023/04/20 13:48:17 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	while (i < len)
		i++;
	i--;
	sub = (char *)malloc(ft_strlen(s) * sizeof(char));
	if (!sub)
		return (0);
	while (i < len)
	{
		sub[i] = s[i];
		i++;
	}
	sub[i] = 0;
	return (sub);
}
