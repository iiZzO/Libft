/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:40:18 by ismael            #+#    #+#             */
/*   Updated: 2024/08/19 19:13:24 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int ch, size_t n)
{
	unsigned char	*str;
	unsigned char	c;
	size_t			i;

	str = (unsigned char *)s;
	c = (unsigned char)ch;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return (str + i);
		++i;
	}
	return (0);
}

/*
int main()
{
	printf("%s\n", (char *)ft_memchr("abcde\0", 'c', 6));
	printf("%s\n", (char *)ft_memchr("abcde\0", 'a', 6));
	printf("%s\n", (char *)ft_memchr("abcde\0", '\0', 6));
}
*/