/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:41:39 by ismael            #+#    #+#             */
/*   Updated: 2024/08/10 20:42:03 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	if (n == 0)
		return (0);
	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (*s1 == *s2 && i < n - 1)
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}

/*
int main()
{
	printf("%d:%d\n", memcmp("abcdef", "abcde", 5),
				   ft_memcmp("abcdef", "abcde", 5) );

	printf("%d:%d\n", memcmp("abc", "abc", 7),
				   ft_memcmp("abc", "abc", 7) );

	printf("%d:%d\n", memcmp("atoms\0\0\0\0", "atoms\0abc", 8),
				   ft_memcmp("atoms\0\0\0\0", "atoms\0abc", 8) );
}

*/