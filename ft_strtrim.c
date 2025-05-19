/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 19:13:35 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/19 22:14:09 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
// int main(void)
// {
//     const char *frase_original = "   ---Hello, world!---   ";
//     const char *set = " -";  // Caracteres a remover do início e fim
//     char *frase_tratada;

//     frase_tratada = ft_strtrim(frase_original, set);

//     if (!frase_tratada)
//     {
//         printf("Erro ao aplicar ft_strtrim.\n");
//         return (1);
//     }

//     printf("Original: \"%s\"\n", frase_original);
//     printf("Apos trim: \"%s\"\n", frase_tratada);

//     free(frase_tratada);
//     return (0);
// }
