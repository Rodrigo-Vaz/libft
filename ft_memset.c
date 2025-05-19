/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:08:51 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/19 20:50:15 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int val, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (len--)
		*ptr++ = (unsigned char)val;
	return (str);
}
//  int main(void)
// {
//     char str[10] = "abcdefghi";

//     printf("Antes do memset: %s\n", str);

//     // Preenche os 5 primeiros bytes com 'X'
//     ft_memset(str, 'X', 5);

//     printf("Resultado: %s\n", str); // Esperado: "XXXXXfghi"

//     return 0;
// }
