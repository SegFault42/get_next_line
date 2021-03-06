/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:52:32 by rabougue          #+#    #+#             */
/*   Updated: 2015/11/28 08:58:07 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*bb;
	size_t	i;

	c = (unsigned char)c;
	bb = (char *)b;
	i = 0;
	while (i < len)
	{
		bb[i] = c;
		i++;
	}
	return (bb);
}
