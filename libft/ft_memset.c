/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:48:32 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/12 18:09:06 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*s;
	unsigned char	value;

	value = c;
	s = (char *)b;
	while (len)
	{
		*s = value;
		s++;
		len--;
	}
	return ((void *)s);
}

// int main(){
//     char s[50] = "hello world !";
//     char *s1 = s;

//     //memset(s,97,5);
//     ft_memset(s,55,5);
//     printf("%s ",s);
// }
