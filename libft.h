/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 22:34:48 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/09 19:03:12 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *str);
unsigned int    ft_strlcpy(char *dest, const char *src, size_t size);
unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);
void    *ft_memset(void *str, int val, size_t len);
void ft_bzero(void *s, size_t len);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);

#endif
