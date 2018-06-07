/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 11:16:50 by lguiller          #+#    #+#             */
/*   Updated: 2018/01/12 12:09:05 by lguiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 42

typedef struct	s_struct
{
	char		buff[BUFF_SIZE];
	char		*str;
	int			len;
	int			rd_len;
}				t_struct;

int				get_next_line(const int fd, char **line);

#endif
