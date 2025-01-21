/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:44:40 by lemarino          #+#    #+#             */
/*   Updated: 2025/01/21 15:48:20 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100000000
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>
# include <string.h>
# include <ctype.h>
# include <stddef.h>
# include <stdarg.h>
# include <limits.h>
# include <fcntl.h>

char			*get_next_line(int fd);
char			*ft_strchr(const char *s, int c);
char			*ft_strjoin(char *s1, char *s2);
size_t			ft_strlen(const char *s);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_strdup(const char *s);

#endif
//cc -Werror -Wall -Wextra prova.c get_next_line.c get_next_line_utils.c
//valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./a.out