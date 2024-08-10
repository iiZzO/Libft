/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:27:55 by ismael            #+#    #+#             */
/*   Updated: 2024/08/10 18:28:29 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*mem;

	mem = malloc(n * size);
	if (mem == 0)
		return (0);
	ft_bzero(mem, n * size);
	return (mem);
}

/*
int main()
{
	int *num = (int*)ft_calloc(5, sizeof(int));

	printf("%d\n", num[0]);
	printf("%d\n", num[1]);
	printf("%d\n", num[2]);
	printf("%d\n", num[3]);
	printf("%d\n", num[4]);
}
*/