/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:11:33 by ismael            #+#    #+#             */
/*   Updated: 2024/08/10 20:11:59 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	digits;

	digits = 0;
	if (n <= 0)
		digits = 1;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

int	custom_pow(int num)
{
	int	val;
	int	count;

	val = 1;
	count = 1;
	while (count < num)
	{
		val *= 10;
		count++;
	}
	return (val);
}

char	*ft_itoa(int n)
{
	char	*mem;
	int		digits;
	int		i;

	digits = count_digits(n);
	mem = malloc((digits + 1) * sizeof(char));
	if (mem == 0)
		return (0);
	if (n == -2147483648)
		return (ft_memcpy(mem, "-2147483648\0", 12));
	i = digits;
	if (n < 0)
	{
		mem[0] = '-';
		n *= -1;
		--i;
	}
	while (i > 0)
	{
		mem[digits - i] = '0' + (n / custom_pow(i));
		n %= custom_pow(i);
		--i;
	}
	mem[digits] = '\0';
	return (mem);
}

/*
int main()
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(0));
	// printf("%d\n", (999 / custom_pow(3)));
}
*/