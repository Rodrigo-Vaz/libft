/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:07:27 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/08 21:21:45 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;

    while (n--)
    {
        *d++ = *s++;
    }

    return dest;
}
// int main(void)
// {
//     char src[] = "Ola Mundo!";
//     char dest[20];

//     ft_memcpy(dest, src, sizeof(src));

//     printf("Conteudo de dest: %s\n", dest);

//     return 0;
// }