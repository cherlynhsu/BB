/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkirsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 20:43:32 by pkirsch           #+#    #+#             */
/*   Updated: 2017/03/26 20:43:33 by pkirsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH2_H
# define RUSH2_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

typedef struct	s_input
{
	char		*input_str;
	int			size;
}				t_input;

typedef struct	s_output
{
	char		*output_str;
	int			size;
}				t_output;

t_output		*rush00(int x, int y);
t_output		*rush01(int x, int y);
t_output		*rush02(int x, int y);
t_output		*rush03(int x, int y);
t_output		*rush04(int x, int y);

t_input			*input_parsing(void);
t_output		*rush0(int x, int y, int rush_ref);
void			ft_compare(t_input *input);

t_output		*create_output(int size);
int				ft_strcmp(char *s1, char *s2);

void			ft_message_display(int *matchs, int rows, int cols);
void			ft_match_rush00(int rush_nbr, int cols, int rows);
void			ft_print_separator(void);
void			ft_everything_is_solution(void);
int				ft_is_nothing(t_input *input);
void			ft_compare_next(t_input *input, int cols, int rows);

void			ft_putnbr(int nb);
void			ft_putchar(char c);
void			ft_putstr(char *str);

#endif
