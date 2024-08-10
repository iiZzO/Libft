/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Istnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:38:27 by ismael            #+#    #+#             */
/*   Updated: 2024/08/10 20:38:57 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (list == 0)
		return (0);
	list->content = content;
	list->next = 0;
	return (list);
}

/*
int main()
{
	t_list *list = ft_lstnew("test1");

	printf("%d\n", (char *)list->content);
	printf("%p\n", list->next);
}
*/