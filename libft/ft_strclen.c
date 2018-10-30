/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strclen.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tprzybyl <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 13:08:16 by tprzybyl     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 13:08:33 by tprzybyl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strclen(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}
