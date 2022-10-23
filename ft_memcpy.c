/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:04:05 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/23 11:31:49 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s;
	char	*d;
	char	*temp;

	s = (char *)src;
	d = (char *)dst;
	temp = (char *)dst;
	while (n)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	dst = d;
	return ((void *)temp);
}
