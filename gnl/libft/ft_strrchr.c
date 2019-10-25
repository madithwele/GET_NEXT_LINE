/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmodisad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:42:01 by mmodisad          #+#    #+#             */
/*   Updated: 2019/06/13 11:47:17 by mmodisad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	char	*ptr;

	ptr = (char *)str + ft_strlen(str);
	while (*ptr != c)
	{
		if (ptr == str)
			return (NULL);
		ptr--;
	}
	return (ptr);
}
