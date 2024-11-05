/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 21:23:15 by yassine           #+#    #+#             */
/*   Updated: 2024/11/05 16:33:53 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void	*f(unsigned int c, char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		s[i] = c;
		i++;
	}
}

int	main()
{
	char s[100] = "bonjour tout le monde";
	ft_striteri(s, f(65, s));

}*/