/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numofstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmodisad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 09:32:15 by mmodisad          #+#    #+#             */
/*   Updated: 2019/06/25 10:17:13 by mmodisad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_numofstr(const char *s, const char del)
{
	unsigned int	i[2];

	i[0] = 0;
	i[1] = 0;
	while (i[0] < ft_strlen(s))
	{
		if (s[i[0]] != del)
		{
			while (s[i[0]] != del && s[i[0]] != '\0')
			{
				i[0]++;
			}
			i[1]++;
		}
		i[0]++;
	}
	return (i[1]);
}
