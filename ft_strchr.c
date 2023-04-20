/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:37:13 by palucena          #+#    #+#             */
/*   Updated: 2023/04/19 09:09:20 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	if (!*str && (char) c == '\0')
		return ((char *) str);
	while (*str != '\0')
	{
		if (*str == (char) c)
			return ((char *) str);
		str++;
		if (*str == (char) c)
			return ((char *) str);
	}
	return (0);
}
