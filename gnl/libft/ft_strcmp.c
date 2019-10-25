/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmodisad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 16:56:15 by mmodisad          #+#    #+#             */
/*   Updated: 2019/06/25 16:04:12 by mmodisad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned char	*dst;
	unsigned char	*src;

	i = 0;
	dst = (unsigned char*)s1;
	src = (unsigned char*)s2;
	while (dst[i] != '\0' && src[i] != '\0' && dst[i] == src[i])
	{
		i++;
	}
	if (((unsigned char)dst[i] - (unsigned char)src[i]) > 0)
		return (1);
	else if (((unsigned char)dst[i] - (unsigned char)src[i]) < 0)
		return (-1);
	else
		return (0);
}
