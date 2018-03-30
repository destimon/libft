/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcherend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 17:56:38 by dcherend          #+#    #+#             */
/*   Updated: 2018/03/30 15:19:06 by dcherend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *restrict dst, const char *restrict src,
		size_t dst_size)
{
	size_t		len;

	len = ft_strlen(dst) + ft_strlen(src);
	if (len <= dst_size)
	{
		ft_strncat(dst, src, (dst_size - ft_strlen(dst) - 1));
		return (len);
	}
	if (!ft_strlen(dst))
		return (ft_strlen(src));
	return (dst_size + ft_strlen(src));
}
