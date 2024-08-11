/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 03:59:51 by ismael            #+#    #+#             */
/*   Updated: 2024/08/11 04:00:09 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int ch)
{
	char	*str;
	char	c;
	size_t	i;

	str = (char *)s;
	c = (char)ch;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (str[i] == c)
			return (str + i);
		if (i == 0)
			break ;
		i--;
	}
	return (0);
}

/*
int main()
{
	const char *str = "hola que tal";
	char *res = ft_strrchr(str, 's');
	printf("%s\n", res);		// NULL
}
*/

/*
int main()
{
	char *str = "hola que tal";
	printf("%s\n", ft_strrchr(str + 2, 'h'));		// NULL
}
*/

/*
int main()
{
	char *str = "";
	printf("%s\n", ft_strrchr(str, '\0'));		// \0
}
*/