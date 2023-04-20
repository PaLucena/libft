/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:06:31 by palucena          #+#    #+#             */
/*   Updated: 2023/04/20 15:55:46 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
	t_list;
}

int				ft_atoi(char *str);
void			ft_bzero(void *str, size_t n);
void			*ft_calloc(size_t nelem, size_t elsize);
int				ft_isalnum(char c);
int				ft_isalpha(char c);
int				ft_isascii(char c);
int				ft_isdigit(char c);
int				ft_isprint(char c);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
char			*ft_strchr(const char *str, int c);
char			*ft_strdup(const char *s);
char			*ft_strjoin(char const *s1, char const *s2);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(const char *str);
int				ft_strncmp(char *s1, char *s2, unsigned	int n);
char			*ft_strnstr(char *str, char *to_find, size_t n);
char			*ft_strrchr(const char *str, int c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);

#endif