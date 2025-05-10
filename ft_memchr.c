/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 17:29:02 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/10 17:54:53 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    
    i = 0;
    while (i < n)
    {
        if(((unsigned char *)s)[i] == (unsigned char)c)
            return ((void *)(s + i ));
        i++;
    }
    return (0);
}
// int main(void)
// {
//     const char data[] = "exemplo de dados";
//     int caractere = 'd';
//     size_t tamanho = sizeof(data);

//     void *resultado = ft_memchr(data, caractere, tamanho);

//     if (resultado)
//         printf("Caractere '%c' encontrado na posição: %ld\n", 
//                caractere, (long)((unsigned char *)resultado - (unsigned char *)data));
//     else
//         printf("Caractere '%c' não encontrado nos primeiros %zu bytes.\n", caractere, tamanho);

//     return 0;
// }
