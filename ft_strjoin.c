/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 03:43:13 by ismael            #+#    #+#             */
/*   Updated: 2024/08/11 03:43:37 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	size_t	size;

	if (s1 == 0 || s2 == 0)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2);
	mem = malloc((size + 1) * sizeof(char));
	if (!mem)
		return (0);
	while (*s1 != '\0')
		*(mem++) = *(s1++);
	while (*s2 != '\0')
		*(mem++) = *(s2++);
	*mem = '\0';
	return (mem - size);
}

/*
int main()
{
	printf("%s\n", ft_strjoin("hola", " que tal"));
}
*/