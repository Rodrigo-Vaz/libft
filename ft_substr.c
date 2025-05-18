/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 18:31:14 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/18 18:48:55 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *nstr;
    size_t i;
    size_t j;

    if(!s || !(nstr = (char *)malloc(len + 1)))
        return (0);
    i = start;
    j = 0;
    while(i < ft_strlen(s) && j < len)
    {
        nstr[j++] = s[i++];
        nstr[j] = '\0';
    }
    return (nstr);
}

// int main()
// {
//     const char *original = "Libft é incrível!";
//     char *sub;

//     // Exemplo: extrair 7 caracteres a partir da posição 6 ("é incrí")
//     sub = ft_substr(original, 6, 7);

//     if (!sub)
//     {
//         printf("Erro ao criar substring.\n");
//         return (1);
//     }

//     printf("Original: \"%s\"\n", original);
//     printf("Substring: \"%s\"\n", sub);

//     free(sub);
//     return (0);
// }