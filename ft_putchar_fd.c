/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:30:54 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/20 20:10:49 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
// #include <fcntl.h>

// int main()
// {
//     int fd;
//     fd = open("/dev/pts/1", O_WRONLY);
//     ft_putchar_fd('c', fd);
//     return 0;
// }