/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 20:47:48 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/18 21:03:43 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  int nbnb(int nb)
{
    int len;
    
    len = 0;
    if(nb <= 0)
        len++;
    while (nb != 0)
    {
        nb = nb / 10;
        len++;
    }
    return (len);
}

char *ft_itoa(int n)
{
    int i;
    char*   str;
    
    i = nbnb(n);
    str = malloc(sizeof(char) * (i +1));
    if (!str)
        return (NULL);
    str[i--] = '\0';
    if (n == '0')
    {
        str[0] = 0;
        return (NULL);
    }
    if (n < 0)
    {
        str[0] = '-';
    }
    while (n != 0)
    {
        if(str[0] == '-')
            str[i--] = '0' + -(n % 10);
        else
            str[i--] = '0' + (n % 10);
        n = n / 10;
    }
    return(str);
}

// int main()
// {
//     int c;
//     c = -12345;

//     printf("%s", ft_itoa(c));
//     return 0;
// }