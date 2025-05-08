/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 17:07:31 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/08 19:13:51 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    return (ft_isdigit(c) || ft_isalpha(c));
}

// int main(void)
// {
//     char *str = "Hello 123";
//     int i = 0;
//     while (str[i])
//     {
//         printf("meu retorno:%i\ncharacter:%c\n\n\n", ft_isalnum(str[i]), str[i]);
//         printf("original retorno:%i\ncharacter:%c\n\n\n", isalnum(str[i]), str[i]);
//         i++;
//     }    
//     return 0;
// }