/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmodisad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 15:55:39 by mmodisad          #+#    #+#             */
/*   Updated: 2019/07/15 12:35:25 by mmodisad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

static int		ft_file_reader(int const fd, char **stk)
{
	char		*tmp_stk;
	char		strbuf[BUFF_SIZE + 1];
	int			res;

	res = read(fd, strbuf, BUFF_SIZE);
	if (res > 0)
	{
		strbuf[res] = '\0';
		tmp_stk = ft_strjoin(*stk, strbuf);
		ft_strdel(stk);
		*stk = tmp_stk;
	}
	return (res);
}

static int		ft_check_line(char **stk, char **line, char **mem)
{
	char	*str;

	*line = ft_strsub(*stk, 0, (*mem - *stk));
	str = ft_strdup(*mem + 1);
	ft_strdel(stk);
	*stk = str;
	return (1);
}

int				get_next_line(int const fd, char **line)
{
	static char		*stk;
	char			*mem;
	int				res;

	if (!line || fd < 0 || BUFF_SIZE <= 0)
		return (-1);
	if (stk == NULL)
		stk = ft_strnew(1);
	while ((mem = ft_strchr(stk, '\n')) == NULL)
	{
		res = ft_file_reader(fd, &stk);
		if (res == 0)
		{
			if (stk[0] == 0)
			{
				*line = ft_strdup("");
				return (0);
			}
			stk = ft_strjoin(stk, "\n");
		}
		else if (res < 0)
			return (-1);
	}
	return (ft_check_line(&stk, line, &mem));
}
