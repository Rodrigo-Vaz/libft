/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 16:44:56 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/22 19:58:36 by rolucas-         ###   ########.fr       */
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
	while (s != ini && (char)c != *s)
		s--;
	if ((char)c == *s)
		return ((char *)s);
	return (NULL);
}

// int main()
// {
// 		const char *str = "pepe y cparlop";
// 		//char find = 'c';
// 		char *result = ft_strrchr(str, 99);
// 		char *result2 = strrchr(str, 99);
// 		printf("%s\n", result);
// 		printf("%s\n", result2);
// }
