/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delstrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmodisad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 09:35:48 by mmodisad          #+#    #+#             */
/*   Updated: 2019/06/24 10:03:39 by mmodisad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_delstrlen(const char *s, const char del)
{
	unsigned int len;

	len = 0;
	while (s[len] != del)
	{
		len++;
	}
	return (len);
}
