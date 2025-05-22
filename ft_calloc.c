/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:18:51 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/22 19:51:50 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total;
	size_t			i;
	unsigned char	*ptr;

	total = count * size;
	ptr = (unsigned char *)malloc(total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total)
		ptr[i++] = '\0';
	return ((void *)ptr);
}

// int main(void)
// {
//     size_t i;
//     int *array;

//     array = (int *)ft_calloc(5, sizeof(int));
//     if (!array)
//     {
//         printf("Erro ao alocar memória com ft_calloc\n");
//         return (1);
//     }

//     printf("Valores inicializados com ft_calloc:\n");
//     for (i = 0; i < 5; i++)
//     {
//         printf("array[%zu] = %d\n", i, array[i]);
//     }

//     free(array);
//     return (0);
// }
