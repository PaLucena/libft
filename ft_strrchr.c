/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:27:19 by palucena          #+#    #+#             */
/*   Updated: 2023/04/19 09:13:40 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	if (!*str && (char) c == '\0')
		return ((char *) str);
	while (*str != '\0')
		str++;
	str--;
	while (*str)
	{
		if (*str == (char) c)
			return ((char *) str);
		str--;
		if (*str == (char) c)
			return ((char *) str);
	}
	return (0);
}
