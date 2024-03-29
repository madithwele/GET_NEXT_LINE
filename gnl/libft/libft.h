/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmodisad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 13:04:11 by mmodisad          #+#    #+#             */
/*   Updated: 2019/06/25 14:42:46 by mmodisad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

char			**ft_strsplit(const char *s, char c);
unsigned int	ft_delstrlen(const char *s, const char del);
unsigned int	ft_numofstr(const char *s, const char del);
int				ft_numlen(long n);
char			*ft_itoa(int n);
int				ft_atoi(const char *str);
void			*ft_memset(void *res, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlen(const char *str);
char			*ft_strdup(const char *src);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, unsigned int n);
char			*ft_strcat(char *s1, const char *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strncat(char *s1, const char *s2, size_t n);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *str, int c);
int				ft_strcmp(const char *str1, const char *str2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(const char *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
void			ft_putchar(char c);
void			ft_putstr(char const *str);
void			ft_putendl(char const *s);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
char			*ft_strnstr(const char *s1, const char *s2, size_t n);
char			*ft_strstr(const char *s1, const char *s2);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putchar_fd(char c, int fd);
int				ft_islower(int c);
int				ft_isupper(int c);
int				ft_space(char c);
#endif
