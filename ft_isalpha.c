/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 22:49:32 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/08 19:19:28 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}
// int main()
// {
//     char *str = "Hello 123";
//     int i = 0;
//     while (str[i])
//     {
//         printf("meu retorno:%i\ncharacter:%c\n\n\n", ft_isalpha(str[i]), str[i]);
//         printf("original retorno:%i\ncharacter:%c\n\n\n", isalpha(str[i]), str[i]);
//         i++;
//     }    
//     return 0;
// }
