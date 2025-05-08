/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:58:46 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/08 21:05:55 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t len)
{
    unsigned char *ptr = (unsigned char *)s;
    while (len--)
    {
      *ptr++ = 0;   
    }
}
// int main(void)
// {
//     char str[10] = "Hello!";
    
//     ft_bzero(str, 10);

//     printf("Conteudo de str apos bzero: '%s'\n", str);

//     return 0;
// }