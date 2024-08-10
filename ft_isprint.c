/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:50:45 by ismael            #+#    #+#             */
/*   Updated: 2024/08/10 18:51:51 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*
int main()
{
	char string[] = "0123456789ABCdefGHIjklMNOpqrSTUvwxYZ\t\v\r";
	int i = 0;
	while (string[i] != '\0')
	{
		printf("%c > %d %d\n", string[i],
			isprint(string[i]), ft_isprint(string[i]));
		i++;
	}
}
*/