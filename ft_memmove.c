/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 03:27:10 by ismael            #+#    #+#             */
/*   Updated: 2024/08/11 03:27:29 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dest;
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

/*
int main()
{
	char *src = "HOLA";
	char dest[50];

	ft_memmove(dest, src, 4);
	printf("%s\n", src);
	printf("%s\n", dest);
}
*/