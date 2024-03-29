/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 02:26:17 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/13 02:26:17 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

# define BASE16_MIN "0123456789abcdef"
# define BASE10 "0123456789"
# define BASE16_MAJ "0123456789ABCDEF"

typedef struct s_node_int
{
	int					content;
	int					index;
	struct s_node_int	*next;
}						t_node_int;

typedef struct s_node
{
	void				*content;
	struct s_node		*next;
}						t_node;

int						ft_atoi(const char *string);
long					ft_atol(const char *s);
int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_tolower(int c);
int						ft_toupper(int c);
size_t					ft_strlen(const char *string);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
void					*ft_memset(void *s, int c, size_t n);
void					*ft_bzero(void *s, size_t n);
void					*ft_calloc(size_t nmemb, size_t size);
void					*ft_memcpy(void *dest, const void *src, size_t n);
void					*ft_memmove(void *dest, const void *src, size_t n);
char					*ft_strdup(const char *s);
size_t					ft_strlcpy(char *dest, const char *src, size_t size);
size_t					ft_strlcat(char *dst, const char *src, size_t dstsize);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(void *s1, const void *s2, size_t n);
char					*ft_strnstr(const char *big, const char *little,
							size_t len);
char					*ft_substr(char const *s1, unsigned int start,
							size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strtrim(char const *s1, char const *set);
char					*ft_itoa(int n);
char					*ft_strmapi(char const *s, char (*f)(unsigned int,
								char));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
int						ft_putstr_fd(char *s, int fd);
void					ft_putendl_fd(char *s, int fd);
void					ft_putnbr_fd(int n, int fd);
t_node_int				*ft_lstnew(int content);
void					ft_lstadd_front(t_node_int **lst, t_node_int *new);
int						ft_lstsize(t_node_int *lst);
t_node_int				*ft_lstlast(t_node_int *lst);
t_node_int				*ft_lstbeforelast(t_node_int *lst);
void					ft_lstadd_back(t_node_int **node, t_node_int *new);
void					*create_and_add(const char *av, t_node_int **one_stack);
void					ft_lstdelone(t_node_int *lst, void (*del)(int));
void					ft_lstclear(t_node_int **lst);
void					ft_lstiter(t_node_int *lst, void (*f)(int));
t_node_int				*ft_lstmap(t_node_int *lst, int (*f)(int),
							void (*del)(int));
void					ft_putchar_fd(char c, int fd);
char					**ft_split(char const *s, char c);
int						ft_printf(const char *s, ...);
int						ft_putchar(int c);
int						ft_putstr(char *s);
int						ft_print_and_count_int(int n, const char *base);
int						print_and_count_ul(unsigned long int n, char *base);
int						print_and_count_u(unsigned int n, char *base);

#endif // LIBFT_H