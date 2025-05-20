/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 19:05:26 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/20 15:56:22 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	to_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
// int main()
// {
//     char str[] = "abcde";
//     int i = 0;

//     while (str[i] != '\0')
//     {
//         str[i] = to_upper(str[i]);
//         i++;
//     }
//     printf("%s\n", str);
// }
