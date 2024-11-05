/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:13:30 by yassine           #+#    #+#             */
/*   Updated: 2024/11/05 12:44:26 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_word(char const *s, char c)
{
	int	index;
	int	cpt;

	index = 0;
	cpt = 0;
	while (*s)
	{
		if (*s != c && index == 0)
		{
			index = 1;
			cpt++;
		}
		else if (*s == c)
			index = 0;
		s++;
	}
	return (cpt);
}

char	*ft_dup(char *s, int start, int finish)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc((finish - start + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (start < finish)
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	int			j;
	int			index;
	char		**split;

	i = 0;
	index = -1;
	j = 0;
	split = malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = ft_dup((char *)s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
/*
#include <stdio.h>
int	main()
{
	char	str[15] = "I/am/an/apple";
	char	**s = ft_split(str, '/');
	for (int i = 0; i < 4;i++)
		printf("%s\n", s[i]);
}*/