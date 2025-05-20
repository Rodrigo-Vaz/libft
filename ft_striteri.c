/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:02:48 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/20 14:18:51 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void ft_touppertest(unsigned int x, char *c)
// {
//     (void)x;
//     if (*c >= 'a' && *c <= 'z')
//         *c -= 32;
//     else
//         *c = *c;
// }
// int main()
// {
//     char str[] = "abcde";

//     ft_striteri(str, ft_touppertest);
//     printf("%s", str);
// }