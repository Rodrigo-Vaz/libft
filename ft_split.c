/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 19:35:37 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/18 20:47:10 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}

// void print_split_result(char **arr)
// {
//     int i = 0;
//     if (!arr)
//     {
//         printf("Resultado NULL\n");
//         return;
//     }
//     while (arr[i])
//     {
//         printf("split[%d] = \"%s\"\n", i, arr[i]);
//         i++;
//     }
//     printf("split[%d] = NULL\n", i);
// }

// // Função para liberar memória alocada pelo ft_split
// void free_split_result(char **arr)
// {
//     int i = 0;
//     if (!arr)
//         return;
//     while (arr[i])
//     {
//         free(arr[i]);
//         i++;
//     }
//     free(arr);
// }

// int main(void)
// {
//     char **resultado;

//     printf("Teste 1: espaço como delimitador\n");
//     resultado = ft_split("banana maçã pera", ' ');
//     print_split_result(resultado);
//     free_split_result(resultado);

//     return 0;
// }