/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:30:01 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/19 21:51:06 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*c_src;
	unsigned char	*c_dst;
	size_t			i;

	c_src = (unsigned char *) src;
	c_dst = (unsigned char *) dst;
	i = 0;
	if (src == dst)
		return (dst);
	if (c_dst > c_src)
		while (len -- > 0)
			c_dst[len] = c_src[len];
	else
	{
		ft_memcpy(c_dst, c_src, len);
	}
	return (dst);
}
// int main() {
//     char str[] = "Hello, world!";

//     // Copiando uma parte de "str" para outra posição dentro de "str"
//     ft_memcpy(str , str, 5);
//         printf("%s\n", str);  // Saída: "Hello, Hello!"
//     return 0;
// }
