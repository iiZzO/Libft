/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Istlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:20:37 by ismael            #+#    #+#             */
/*   Updated: 2024/08/10 20:21:00 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current != 0)
	{
		if (current->next == 0)
			return (current);
		current = current->next;
	}
	return (0);
}

/*
int main()
{
	t_list *list = ft_lstnew("test1");
	list->next = ft_lstnew("test2");

	t_list *last = ft_lstlast(list);
	printf("%s\n", (char *)last->content);
}
*/