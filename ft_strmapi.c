/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:19:08 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/20 14:19:27 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

// char ft_touppertest(unsigned int x, char y)
// {
//     x = 32;
//     if (y >= 'a' && y <= 'z')
//         return (y -x);
//     return (y);
// }

// int main()
// {
//     char const  str[] = "Essa mensagem foi encriptada!\n";
//     char    *mod;

//     mod = ft_strmapi(str, ft_touppertest);
//     printf("%s", mod);
// }