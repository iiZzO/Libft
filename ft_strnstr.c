/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 03:59:14 by ismael            #+#    #+#             */
/*   Updated: 2024/08/11 03:59:43 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	b;
	size_t	l;

	b = 0;
	if (big == 0 && n == 0)
		return (0);
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[b] != '\0' && b < n)
	{
		l = 0;
		while (big[b + l] != '\0' && little[l] != '\0'
			&& big[b + l] == little[l] && b + l < n)
			l++;
		if (little[l] == '\0')
			return ((char *)big + b);
		b++;
	}
	return (0);
}

/*
int main()
{
	printf("%s\n", ft_strnstr("prueba", "e", 6));
}
*/