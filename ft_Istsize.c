/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Istsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:39:30 by ismael            #+#    #+#             */
/*   Updated: 2024/08/10 20:39:57 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	size_t	i;

	i = 0;
	current = lst;
	while (current != 0)
	{
		current = current->next;
		++i;
	}
	return (i);
}

/*
int main()
{
	t_list *list = ft_lstnew("test1");
	list->next = ft_lstnew("test2");

	t_list *new = ft_lstnew("new");
	ft_lstadd_back(&list, new);
	printf("%d\n", ft_lstsize(list));
}
*/