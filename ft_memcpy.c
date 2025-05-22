/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:07:27 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/22 19:42:58 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	int					i;

	i = 0;
	d = dest;
	s = src;
	while (n--)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
//     char src[] = "Ola mundo";
//     char dest[10];

//     memcpy(src, dest, sizeof(src));
//     printf("Conteudo de dest: %s\n", dest);

//     return 0;
// }