/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 18:31:14 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/22 19:38:31 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*nstr;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		start = ft_strlen(s);
		len = 0;
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	nstr = (char *)malloc(len + 1);
	if (!nstr)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
	{
		nstr[j++] = s[i++];
	}
	nstr[j] = '\0';
	return (nstr);
}

// int main()
// {
//     const char *original = "Libft e incrivel!";
//     char *sub;

//     // Exemplo: extrair 7 caracteres a partir da posição 6 ("e incri")
//     sub = ft_substr("0123456789", 9, 10);

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