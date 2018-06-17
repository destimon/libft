/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcherend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 20:49:19 by dcherend          #+#    #+#             */
/*   Updated: 2018/03/31 20:50:11 by dcherend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int	root;

	root = 1;
	if (nb == 0)
		return (0);
	while (root <= (nb / 2))
	{
		if (root * root == nb)
			return (root);
		root++;
	}
	return (0);
}
