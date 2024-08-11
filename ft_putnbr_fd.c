/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 03:31:04 by ismael            #+#    #+#             */
/*   Updated: 2024/08/11 03:31:59 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	write_num(int n, int fd)
{
	char	c;

	c = '0' + n;
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			n %= 10;
		}
		if (n < 10)
			write_num(n, fd);
	}
}

/*
int main()
{
	ft_putnbr_fd(-2147483648, 1);
	ft_putnbr_fd(2147483647, 1);
	ft_putnbr_fd(0, 1);
}
*/