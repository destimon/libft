/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcherend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 14:36:49 by dcherend          #+#    #+#             */
/*   Updated: 2018/03/30 18:06:23 by dcherend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*new;
	int		i;

	i = 0;
	if (s)
	{
		str = (char*)s;
		new = ft_strdup(str);
		if (new)
		{
			while (str[i])
			{
				new[i] = f(str[i], i);
				i++;
			}
			return (new);
		}
	}
	return (NULL);
}
