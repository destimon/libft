/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcherend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 17:38:34 by dcherend          #+#    #+#             */
/*   Updated: 2018/03/25 17:43:43 by dcherend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isprint(int c)
{
	unsigned char p;

	p = (unsigned char)c;
	if (c >= (unsigned char)32 && c <= (unsigned char)126)
		return (1);
	return (0);
}
