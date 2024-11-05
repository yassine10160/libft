/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:36:15 by yassine           #+#    #+#             */
/*   Updated: 2024/10/11 18:04:50 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_begin(char const *s, char const *set)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	while (s[i])
	{
		j = 0;
		index = 0;
		while (set[j])
		{
			if (s[i] == set[j])
				index = 1;
			j++;
		}
		if (!index)
			break ;
		i++;
	}
	return ((char *)(s + i));
}

char	*ft_end(char const *s, char const *set)
{
	int		len;
	size_t	i;
	int		index;

	len = ft_strlen(s) - 1;
	while (len > 0)
	{
		i = 0;
		index = 0;
		while (set[i])
		{
			if (s[len] == set[i])
				index = 1;
			i++;
		}
		if (!index)
			break ;
		len--;
	}
	return ((char *)(s + len));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*begin;
	char	*end;
	char	*dest;
	int		i;

	i = 0;
	begin = ft_begin(s1, set);
	end = ft_end(s1, set);
	dest = malloc ((end - begin + 2) * sizeof(char));
	if (!dest)
		return (NULL);
	while (begin + i <= end)
	{
		dest[i] = begin[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	set[5] = ". ";
	char	str[15] = ".hello...";
	printf("%s", ft_strtrim(str, set));
}*/