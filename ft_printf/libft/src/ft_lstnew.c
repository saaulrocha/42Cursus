/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srocha-r <srocha-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:20:40 by srocha-r          #+#    #+#             */
/*   Updated: 2023/03/27 11:31:44 by srocha-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int main(void)
{
	// Test 1:
	int *num = malloc(sizeof(int));
	*num = 42;
	t_list *list1 = ft_lstnew(num);
	printf("List1: content=%d, next=%p\n", *(int *)list1->content, list1->next);

	// Test 2:
	char *str = "Hola, mundo!";
	t_list *list2 = ft_lstnew(str);
	printf("List2: content=%s, next=%p\n", (char *)list2->content, list2->next);

	// Test 3:
	t_list *list3 = ft_lstnew(NULL);
	printf("List3: content=%p, next=%p\n", list3->content, list3->next);

	return (0);
}
*/
