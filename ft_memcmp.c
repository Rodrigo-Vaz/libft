/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 17:55:12 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/19 22:07:15 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
// int main()
// {
// 	char str1[] = "Hello";
//     char str2[] = "Hello Abcde";

//     int a;
//     int b;

//     a = ft_memcmp(str1, str2, 10);
//     b = memcmp(str1,str2, 10);
//     printf("%d\n", a);
//     printf("%d\n", b);

//     // Teste com strings idênticas
//     {
//         char str1[] = "Hello";
//         char str2[] = "Hello";
//         int a = ft_memcmp(str1, str2, 5);
//         int b = memcmp(str1, str2, 5);
//         printf("Teste 1 (strings iguais): ft_memcmp=%d, memcmp=%d\n", a, b);
//     }

//     // Teste com primeira diferença
//     {
//         char str1[] = "Hello";
//         char str2[] = "Hellx";
//         int a = ft_memcmp(str1, str2, 5);
//         int b = memcmp(str1, str2, 5);
//         printf("Teste 2 
// (diferença em 'o' vs 'x'): ft_memcmp=%d, memcmp=%d\n", a, b);
//     }

//     // Teste com caracteres especiais (valores grandes de unsigned char)
//     {
//         unsigned char str1[] = {200, 200, 200};
//         unsigned char str2[] = {200, 200, 150};
//         int a = ft_memcmp(str1, str2, 3);
//         int b = memcmp(str1, str2, 3);
//         printf("Teste 3 
// (valores grandes de unsigned char): ft_memcmp=%d, memcmp=%d\n", a, b);
//     }

//     // Teste com valores negativos se interpretados como signed char
//     {
//         unsigned char str1[] = {150, 200, 250};
//         unsigned char str2[] = {150, 200, 200};
//         int a = ft_memcmp(str1, str2, 3);
//         int b = memcmp(str1, str2, 3);
//         printf("Teste 4 
// (possíveis valores negativos): ft_memcmp=%d, memcmp=%d\n", a, b);
//     }

//     return 0;
// }
