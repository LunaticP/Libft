/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_disptab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviau <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 20:13:46 by aviau             #+#    #+#             */
/*   Updated: 2016/01/28 06:36:05 by aviau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_disptab(int len, char **tab)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x <= len)
	{
		while (tab[x][y] != '\0')
		{
			write(1, &tab[x][y], 1);
			y++;
		}
	write(1, "\n", 1);
	x++;
	y = 0;
	}
}
