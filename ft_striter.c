/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 18:33:23 by cdenys-a          #+#    #+#             */
/*   Updated: 2018/11/27 23:01:13 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_libft.h>

void	ft_striter(char *s, void (*f)(char *))
{
	char*	i;

	i = s;
	if (!s || !f)
		return ;
	while (*i)
		f(i++);
}