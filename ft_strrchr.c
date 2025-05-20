/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 16:44:56 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/20 15:55:13 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*ini;

	ini = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *ini && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
// int main()
// {
//		const char *str = "abcabc";
//		char find = 'b';

//		char *result = ft_strrchr(str, find);

//		if (result)
//		printf("caractere '%c' encontrado em: \"%s\"\n", find, result);
//		else
//		printf("Caractere '%c' nao encontrado. \n", find);

//		return 0;
// }
