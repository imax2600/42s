/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppromrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:32:41 by ppromrak          #+#    #+#             */
/*   Updated: 2022/03/17 20:33:02 by ppromrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<unistd.h>
void	*ft_memset(void *s, int c, size_t  n)
{
	size_t		i;
	unsigned char	*bb;

	bb = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		bb[i] = c;
		i++;
	}
	return (bb);
}
