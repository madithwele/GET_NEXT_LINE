/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:51:52 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/25 15:53:58 by mmodisad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*ptr;
	long	num;
	int		i;

	num = n;
	i = ft_numlen(num);
	if (!(ptr = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ptr[i] = '\0';
	ptr[0] = 48;
	if (n == 0)
		ptr[0] = 48;
	if (num < 0)
	{
		ptr[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		ptr[i - 1] = 48 + (num % 10);
		num = num / 10;
		i--;
	}
	return (ptr);
}
