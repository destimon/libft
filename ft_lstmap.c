/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcherend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:43:32 by dcherend          #+#    #+#             */
/*   Updated: 2018/03/30 19:54:18 by dcherend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ls;
	t_list	*gen;
	t_list	*start;

	if (lst)
	{
		ls = f(lst);
		start = ls;
		list = list->next;
		while (lst)
		{
			gen = f(lst);
			if (gen)
			{
				lst = lst->next;
				list = lst->next;
			}
		}
		return (start);
	}
	return (NULL);
}
