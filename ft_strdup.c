/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 03:39:42 by ismael            #+#    #+#             */
/*   Updated: 2024/08/11 03:40:29 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*mem;
	size_t	i;

	mem = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (mem == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		mem[i] = s[i];
		++i;
	}
	mem[i] = '\0';
	return (mem);
}

/*
int main()
{
	char *s = strdup("Hola");

	printf("%s\n", s);
}
*/