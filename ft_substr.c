/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:30:46 by yassine           #+#    #+#             */
/*   Updated: 2024/11/05 16:42:05 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	len_s;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	len_s = ft_strlen(s);
	dest = malloc((len_s - start + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (start < len_s && i < len)
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 5)
		return (3);
	printf("%s", ft_substr(av[1], 6 , 6));
}*/