/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmodisad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 09:27:10 by mmodisad          #+#    #+#             */
/*   Updated: 2019/06/25 09:58:30 by mmodisad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char			**t;
	unsigned int	i[2];

	i[0] = 0;
	i[1] = 0;
	if (!s)
		return (NULL);
	if (!(t = (char **)malloc(sizeof(char *) * ft_numofstr(s, c) + 1)))
		return (NULL);
	while (i[0] < ft_strlen(s))
	{
		if (s[i[0]] != c)
		{
			if (!(t[i[1]] = (char *)ft_memalloc(8 * ft_delstrlen(&s[i[0]], c))))
				return (NULL);
			t[i[1]] = ft_strsub(s, i[0], ft_delstrlen(&s[i[0]], c));
			i[1]++;
			i[0] += ft_delstrlen(&s[i[0]], c);
		}
		i[0]++;
	}
	t[i[1]] = NULL;
	return (t);
}
