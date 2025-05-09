/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 15:27:29 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/09 18:47:15 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
        unsigned int    i;
        unsigned int    j;
        unsigned int    k;

        i = ft_strlen(dest);
        k = ft_strlen(src);
        j = 0;
        if (size <= i)
                return (k += size);
        k += i;
        while (src[j] != '\0' && (i + 1) < size)
        {
                dest[i] = src[j];
                i++;
                j++;
        }
        dest[i] = '\0';
        return (k);
}
// int main()
// {
//     char dest[20] = "Hello";
//     char src[] = " World";
//     unsigned int size = 15;  // Limite do tamanho de 'dest'

//     // Testa a função ft_strlcat
//     unsigned int result = ft_strlcat(dest, src, size);

//     // Imprime o resultado
//     printf("String final: %s\n", dest);
//     printf("Tamanho total que teria sido: %u\n", result);

//     return 0;
// }