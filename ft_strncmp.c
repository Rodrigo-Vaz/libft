/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 17:09:23 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/10 17:27:11 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int    i;

    i = 0;
    while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
    {
        if(s1[i] < s2[i] || s1[i] > s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}
// int main()
// {
//     char *src1 = "Hello V";
//     char *src2 = "Hello Wordl";
//     unsigned int size = 10;
//     int result;

//     result = ft_strncmp(src1, src2, size);

//     printf("%d", result);
//     printf("%d", strncmp (src1, src2, size));
// }