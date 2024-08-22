/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Istadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:13:28 by ismael            #+#    #+#             */
/*   Updated: 2024/08/11 22:10:08 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = lst[0];
	lst[0] = new;
	new->next = temp;
}

/*
int main()
{
	t_list *list = ft_lstnew("test1");
	list->next = ft_lstnew("test2");

	t_list *new = ft_lstnew("new");
	ft_lstadd_front(&list, new);
	printf("%d\n", ft_lstsize(list));
}
*/