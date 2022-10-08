/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:36:11 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/08 14:36:16 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (97 <= c && c <= 122)
		c -= 32;
	return (c);
}