/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:40:18 by ismael            #+#    #+#             */
/*   Updated: 2024/08/10 20:41:02 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Scans the initial n bytes
 * both c and the bytes of s are interpreted as unsigned char
*/
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