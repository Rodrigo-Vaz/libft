/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:06:21 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/08 17:45:07 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
    if(c >= '0'&& c <= '9')
        return (1);

    return (0);
}
// int main(void)
// {
//     char *str = "Hello 132";
//     int i = 0;
//     printf("Testando ft_isdigit:\n\n");
//     while (str[i])
//     {
//        printf("meu retorno:%i\ncharacter:%c\n\n\n", ft_isdigit(str[i]), str[i]);
//         printf("original retorno:%i\ncharacter:%c\n\n\n", ft_isdigit(str[i]), str[i]);
//         i++;
//     }
//     return (0);
// }