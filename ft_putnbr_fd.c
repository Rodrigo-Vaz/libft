/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolucas- <rolucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:13:04 by rolucas-          #+#    #+#             */
/*   Updated: 2025/05/20 14:26:45 by rolucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0 && n != -2147483648)
	{
		write(fd, "-", 1);
		n = -n;
	}
	while (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		n = n % 10;
	}
	if (n < 10)
	{
		n = n + '0';
	}
	write(fd, &n, 1);
}
// #include <fcntl.h>

// int main()
// {
//     int fd;

//     fd = open("/dev/pts/1", O_WRONLY);   
//     ft_putnbr_fd(-2147483648, fd);
//     return 0;
// }