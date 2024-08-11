/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 03:25:49 by ismael            #+#    #+#             */
/*   Updated: 2024/08/11 03:26:23 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == 0 && dest == 0)
		return (0);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
int main()
{
	char	*mem;

	mem = malloc(5 * sizeof(char));
	ft_memcpy(mem, "HOLA\0", 5);
	printf("%s\n", mem);

	// ft_memcpy(((void *)0), ((void *)0), 3);
}
*/