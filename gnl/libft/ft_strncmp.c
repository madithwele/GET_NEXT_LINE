/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmodisad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:18:45 by mmodisad          #+#    #+#             */
/*   Updated: 2019/06/25 16:48:34 by mmodisad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_comp(unsigned char s, unsigned char str)
{
	if ((s - str) > 0)
		return (1);
	else if ((s - str) < 0)
		return (-1);
	else
		return (0);
}

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (ft_comp(s1[i], s2[i]));
		}
		i++;
	}
	if (i == n)
		return (0);
	return (ft_comp(s1[i], s2[i]));
}
