/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 16:02:38 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/20 15:56:18 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	return (c);
}
// int main()
// {
//     char str[] = "ABCDE";
//     int i = 0;

//     while (str[i] != '\0')
//     {
//         str[i] = to_lower(str[i]);
//         i++;
//     }
//     printf("%s\n", str);
// }
