/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:19:14 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/19 20:51:12 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)

{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size)
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

//     // Verifica se houve truncamento
//     if (tamanho_necessario >= tam_buffer) {
//         printf("⚠️ Atenção: string foi truncada!\n");
//     } else {
//         printf("✅ String copiada sem truncamento.\n");
//     }

//     return 0;
// }
