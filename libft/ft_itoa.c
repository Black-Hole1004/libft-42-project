/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:26:42 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/12 18:31:03 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* ft_itoa:       [FAILED] [OK] [OK] [FAILED] [FAILED] [OK] [KO] [KO] [OK]
[fail]: your itoa does not work with basic input
[fail]: your itoa does not work with min int
[fail]: your itoa don't set \0 at the end of the string
[KO]: your itoa does not allocate the good size so the \0 test may be false
[KO]: your itoa does not allocate the good size so the \0 test may be false*/
int	nbr_len(int nbr)
{
	int	count;

	count = 0;
	while (nbr)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len_nbr;
	int		temp;
	char	*to_string;

	len_nbr = nbr_len(n);
	temp = nbr_len(n);
	to_string = (char *)malloc((nbr_len(n) + 1) * sizeof(char));
	if (!to_string)
		return (NULL);
	while (len_nbr)
	{
		to_string[len_nbr - 1] = (n % 10) + 48;
		n = n / 10;
		len_nbr--;
	}
	to_string[temp] = '\0';
	return (to_string);
}
