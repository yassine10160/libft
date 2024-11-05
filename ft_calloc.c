/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 09:54:19 by yassine           #+#    #+#             */
/*   Updated: 2024/11/05 13:30:14 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;
	size_t	i;

	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	dest = malloc((nmemb * size) * sizeof(void));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < size * nmemb)
	{
		*(unsigned char *)(dest + i) = 0;
		i++;
	}
	return (dest);
}