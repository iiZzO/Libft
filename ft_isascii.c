/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:48:58 by ismael            #+#    #+#             */
/*   Updated: 2024/08/10 18:49:28 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*
int main()
{
	char string[] = "0123456789ABCdefGHIjklMNOpqr
		STUvwxYZ!@#$%^&*()_+{}[]ñáéíóúñàèìòù";
	int i = 0;
	while (string[i] != '\0')
	{
		printf("%c > %d %d\n", string[i],
			isascii(string[i]), ft_isascii(string[i]));
		i++;
	}
}
*/