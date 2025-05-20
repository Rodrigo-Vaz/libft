/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:19:14 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/20 16:42:28 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)

{
	size_t	i;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// int main(void) 
// {
//     const char *origem = "Essa string é maior que o destino.";
//     char destino[16]; // buffer propositalmente menor
//     size_t tam_buffer = sizeof(destino);

//     // Copia com segurança usando strlcpy
//     size_t tamanho_necessario = ft_strlcpy(destino, origem, tam_buffer);

//     // Exibe os resultados
//     printf("Origem..............: \"%s\"\n", origem);
//     printf("Destino (copiado)...: \"%s\"\n", destino);
//     printf("Tamanho necessário..: %zu\n", tamanho_necessario);
//     printf("Tamanho do buffer...: %zu\n", tam_buffer);

//     return 0;
// }
