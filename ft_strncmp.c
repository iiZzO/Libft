/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 03:58:45 by ismael            #+#    #+#             */
/*   Updated: 2024/08/11 22:09:58 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int main()
{
	char *s1 = "hola";
	char *s2 = "";
	int num = 0;
	// printf("%d\n", ft_strncmp(s1, s2, num));
	// printf("%d\n", strncmp(s1, s2, num));

	printf("%d\n", strncmp("b", "a", 0));
}
*/