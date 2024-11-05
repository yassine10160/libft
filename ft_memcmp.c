/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 20:28:52 by yassine           #+#    #+#             */
/*   Updated: 2024/10/20 17:01:10 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*(unsigned char *)(s1 + i) && *(unsigned char *)(s2 + i)
		&& *(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i) && i < n)
		i++;
	if (i < n)
		return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
	return (0);
}
