/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 16:09:25 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/21 20:46:10 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && (char)c != *s)
		s++;
	if ((char)c == *s)
		return ((char *)s);
	return (0);
}
// int main()
// {
//     const char *str = "casca casaco abacaxi";
//     char f = 'a';

//     char *result = ft_strchr(str, f);

//     if (result)
//         printf("Primeira vez '%c' encontrada em: \"%s\"\n", f, result);
//     else
//         printf("Caractere '%c' não encontrado.\n", f);

//     return 0;
// }
