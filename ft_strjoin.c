/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 18:51:30 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/18 19:09:41 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *nstr;
    int i;
    int j;

    if (!s1 || !s2 || !(nstr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2))))
    return 0;

    i = 0;
    while (s1[i] != '\0')
    {
        nstr[i] = s1[i];
        i++;
    }

    j = 0;
    while (s2[j] != '\0')
    {
        nstr[i++] = s2[j++];
        nstr[i] = '\0';
    }
    return (nstr);
}
// int main()
// {
//     const char s1[] = "Libft 42 teste";
//     const char s2[] = "concatenar";
    
//     printf("%s",ft_strjoin(s1, s2));

//     return 0;
// }