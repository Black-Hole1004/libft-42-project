/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:32:05 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/12 20:56:07 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* [fail]: your atoi does not work with positive numbers
[fail]: your atoi does not work with negative numbers
[fail]: your atoi does not work with random numbers
[fail]: your atoi is not working with blanks
[fail]: your atoi is not working with blanks
[fail]: your atoi does not work with int max value
[fail]: your atoi does not work with int min value
[KO]: your atoi does not work with long max value
[KO]: your atoi does not work with over long max value
[KO]: your atoi does not work with the plus sign*/
int	is_whitespace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (is_whitespace(*str))
		str++;
	if (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
		sign *= (-1);
	str++;
	}
	while (*str && ft_isdigit((*str)))
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * (sign));
}
