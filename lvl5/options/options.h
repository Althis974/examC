/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   options.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/05 11:19:52 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2018/03/05 14:10:45 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef OPTIONS_H
# define OPTIONS_H

# include <unistd.h>

typedef struct	s_octet
{
				char res[32];
				int usg;
}				t_octet;

void    ft_parse(char *s, t_octet *op);
int     ft_options(char *s, t_octet *op);
int     ft_get_index(char c);
void    ft_usage(void);
void    ft_putchar(int c);
void    ft_error(void);
int     ft_check_str(char *s, t_octet *op);
void    ft_init(t_octet *op);

#endif
