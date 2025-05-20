/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 18:31:14 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/20 16:50:13 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*nstr;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (start >= len)
		return 
	nstr = (char *)malloc(len + 1);
	if (!s || !nstr)
		return (free(nstr), NULL);
	while (i < ft_strlen(s) && j < len)
	{
		nstr[j++] = s[i++];
		nstr[j] = '\0';
	}
	return (nstr);
}

// int main()
// {
//     const char *original = "Libft é incrível!";
//     char *sub;

//     // Exemplo: extrair 7 caracteres a partir da posição 6 ("é incrí")
//     sub = ft_substr(original, 6, 7);

//     if (!sub)
//     {
//         printf("Erro ao criar substring.\n");
//         return (1);
//     }

//     printf("Original: \"%s\"\n", original);
//     printf("Substring: \"%s\"\n", sub);

//     free(sub);
//     return (0);
// }