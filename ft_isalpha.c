/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 22:49:32 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/19 22:21:07 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
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
//         printf("ft_isalpha:%i\ncharacter:%c\n", ft_isalpha(str[i]), str[i]);
//         printf("original:%i\ncharacter:%c\n", isalpha(str[i]), str[i]);
//         i++;
//     }    
//     return 0;
// }
