/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacques <mjacques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 22:30:13 by mjacques          #+#    #+#             */
/*   Updated: 2019/04/12 14:43:37 by mjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRUCT_H
# define FT_STRUCT_H

typedef struct		s_op
{
	char			*op_name;
	int				arg_nbr;
	int				p[3];
	int				opcode;
	int				cycle_req;
	char			*comment;
	_Bool			is_coding_byte;
	_Bool			truncation;
}					t_op;

typedef struct		s_line
{
	char			*str;
	int				size;
	t_op			*op;
	struct s_line	*next;
}					t_line;

typedef struct		s_label
{
	char			*label;
	t_line			*line;
	int				index;
	struct s_label	*next;
}					t_label;

t_op	g_tab[17];

#endif
