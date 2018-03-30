/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcherend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 13:56:45 by dcherend          #+#    #+#             */
/*   Updated: 2018/03/30 19:37:59 by dcherend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count_words(char const *str, char del)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == del && (*(str + 1) != del && *(str + 1) != '\0'))
			i++;
		str++;
	}
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char 	**arr;
	int		wlen;
	int		count;
	int 	iword;
	int		i;
	
	if (s)
	{
		i = 0;
		iword = 0;
		wlen = ft_count_words(s, c);
		arr = (char**)malloc(sizeof(*arr) * (wlen + 3));
		count = 0;
		if (arr)
		{
			while (s[i])
			{
				if (s[i] != c)
					count++;
				else if (count)
				{
					arr[iword++] = ft_strsub(s, (i - count), count);
					count = 0;
				}
				i++;
			}
		}
		arr[iword + 1] = "\0";
		return (arr);
	}
	return (NULL);
}

/*
int	main()
{
	char *str = "*fuck";

	ft_strsplit(str, '*');
}*/
