/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:36:06 by cdenys-a          #+#    #+#             */
/*   Updated: 2018/11/23 17:50:54 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_libft.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*crwr;
	unsigned char	*u;

	i = 0;
	crwr = (unsigned char*)b;
	u = (unsigned char*)(&c);
	while (i < len)
	{
		*crwr = *u;
		i++;
		crwr++;
	}
	return (b);
}
