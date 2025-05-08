/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:30:01 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/08 21:52:28 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char    *c_src;
    char    *c_dst;
    size_t  i;

    if (!dst && !src)
        return (NULL);
    c_src = (char *) src;
    c_dst = (char *) dst;
    i = 0;

    if (c_dst > c_src)
        while (len -- > 0)
            c_dst[len] = c_src[len];

    else
    {
        while (i++ < len)
            c_dst[i] = c_src[i];   
    }
    return (dst);
}
int main() {
    char str[] = "Hello, world!";
    
    // Copiando uma parte de "str" para outra posição dentro de "str"
    ft_memmove(str + 7, str, 5);
        printf("%s\n", str);  // Saída: "Hello, Hello!"
    return 0;
}