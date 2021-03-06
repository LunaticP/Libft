/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviau <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 04:35:00 by aviau             #+#    #+#             */
/*   Updated: 2016/01/28 06:08:59 by aviau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	if (!s)
		return (NULL);
	size_t	i;
	char	*ret;

	i = 0;
	if (!(ret = (char *)ft_memalloc(sizeof(char) * len + 1)))
		return (NULL);
	ret = ft_strncpy(ret, s += start, len);
	return (ret);
}
