/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:54:44 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/19 20:57:54 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*copy;
	size_t	i;

	len = 0;
	while (s[len])
		len++;
	copy = (char *)malloc(len + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
// int main()
// {
//     const char *original = "teste teste teste";
//     char *copia; 

//     copia = ft_strdup(original);
//     if(!copia)
//     {
//         printf("Erro ao duplicar string ft_strdup\n");
//         return (1);
//     }

//     printf("Original: \"%s\n", original);
//     printf("Copia: \"%s\"\n", copia);

//     return 0;
// }
