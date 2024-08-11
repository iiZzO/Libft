/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 03:46:46 by ismael            #+#    #+#             */
/*   Updated: 2024/08/11 03:47:08 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mem;
	size_t	size;
	size_t	i;

	if (s == 0 || f == 0)
		return (0);
	size = ft_strlen(s);
	mem = malloc((size + 1) * sizeof(char));
	if (mem == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		mem[i] = (*f)(i, s[i]);
		++i;
	}
	mem[i] = '\0';
	return (mem);
}