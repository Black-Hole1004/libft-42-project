/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmaymou <ahmaymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:23:07 by ahmaymou          #+#    #+#             */
/*   Updated: 2022/10/13 17:04:22 by ahmaymou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function name ft_striteri
Prototype void ft_striteri(char *s, void (*f)(unsigned int,
char*));
Fichiers de rendu -
Paramètres s: La chaîne de caractères sur laquelle itérer.
f: La fonction à appliquer à chaque caractère.
Valeur de retour Aucune
Fonctions externes autorisées
Aucune
Description Applique la fonction ’f’ à chaque caractère de la
chaîne de caractères transmise comme argument,
et en passant son index comme premier argument.
Chaque caractère est transmis par adresse à ’f’
afin d’être modifié si nécessaire.
[fail]: your striteri does no work
*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (*s)
	{
		f(i, s);
		s++;
		i++;
	}
}
