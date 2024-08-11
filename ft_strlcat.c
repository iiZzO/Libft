/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 03:44:13 by ismael            #+#    #+#             */
/*   Updated: 2024/08/11 03:44:33 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	src_i;
	size_t	dest_i;
	size_t	result;
	size_t	i;

	if (dest == 0 && n == 0)
		return (0);
	dest_i = ft_strlen(dest);
	src_i = ft_strlen(src);
	i = 0;
	if (n > dest_i)
		result = src_i + dest_i;
	else
		result = src_i + n;
	while (src[i] && n > (dest_i + 1))
	{
		dest[dest_i] = src[i];
		dest_i++;
		i++;
	}
	dest[dest_i] = '\0';
	return (result);
}

/*
int main()
{
	char	dest[30] = "lorem\0";
	ft_strlcat(dest, " ipsum dolor sit amet", 10);
	printf("%s\n", dest);
}
*/